// #include <stdio.h>
// #include <stdlib.h>

// struct Item {
//     int id;
//     float weight, profit, ratio;
// };
// int compare(const void *a, const void *b) {
//     struct Item *x = (struct Item *)a;
//     struct Item *y = (struct Item *)b;

//     if (x->ratio < y->ratio)
//         return 1;
//     if (x->ratio > y->ratio)
//         return -1;
//     return 0;
// }
// int main() {
//     struct Item items[100];
//     int n, i;
//     float capacity, totalProfit = 0;

//     printf("Enter number of items: ");
//     scanf("%d", &n);

//     if (n <= 0 || n > 100) {
//         printf("Invalid number of items.\n");
//         return 1;
//     }
//     for (i = 0; i < n; i++) {
//         items[i].id = i + 1;

//         printf("Enter weight and profit of item %d: ", i + 1);
//         scanf("%f %f", &items[i].weight,
//                        &items[i].profit);

//         if (items[i].weight <= 0 || items[i].profit < 0) {
//             printf("Invalid weight or profit.\n");
//             return 1;
//         }
//         items[i].ratio =
//             items[i].profit / items[i].weight;
//     }
//     printf("Enter knapsack capacity: ");
//     scanf("%f", &capacity);

//     if (capacity < 0) {
//         printf("Invalid capacity.\n");
//         return 1;
//     }
//     printf("\nProfit-to-Weight Ratios:\n");

//     for (i = 0; i < n; i++) {
//         printf("Item %d: %.2f\n",
//                items[i].id, items[i].ratio);
//     }

//     qsort(items, n, sizeof(struct Item), compare);

//     printf("\nSelected Items:\n");

//     for (i = 0; i < n && capacity > 0; i++) {
//         float fraction;

//         if (items[i].weight <= capacity) {
//             fraction = 1.0;
//         } else {
//             fraction = capacity / items[i].weight;
//         }

//         float selectedWeight =
//             fraction * items[i].weight;

//         float selectedProfit =
//             fraction * items[i].profit;

//         printf("Item %d: Fraction = %.2f, "
//                "Weight = %.2f, Profit = %.2f\n",
//                items[i].id, fraction,
//                selectedWeight, selectedProfit);

//         totalProfit += selectedProfit;
//         capacity -= selectedWeight;
//     }
//     printf("\nMaximum Total Profit = %.2f\n",
//            totalProfit);
//     printf("Time Complexity = O(n log n)\n");
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char ch;
    int freq;
    struct Node *left, *right;
};
struct Node *heap[200];
int size = 0;
struct Node *createNode(char ch, int freq) {
    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));
    newNode->ch = ch;
    newNode->freq = freq;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
void insert(struct Node *node) {
    int i = ++size;

    while (i > 1 && heap[i / 2]->freq > node->freq) {
        heap[i] = heap[i / 2];
        i = i / 2;
    }
    heap[i] = node;
}
struct Node *extractMin() {
    struct Node *minNode = heap[1];
    struct Node *last = heap[size--];
    int i = 1, child;
    while (2 * i <= size) {
        child = 2 * i;
        if (child + 1 <= size &&
            heap[child + 1]->freq < heap[child]->freq) {
            child++;
        }
        if (last->freq <= heap[child]->freq)
            break;
        heap[i] = heap[child];
        i = child;
    }
    if (size > 0)
        heap[i] = last;

    return minNode;
}

void generateCodes(struct Node *root, char code[],
                   int top, char codes[256][100]) {
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL) {
        if (top == 0)
            code[top++] = '0';
        code[top] = '\0';
        strcpy(codes[(unsigned char)root->ch], code);
        printf("Character %c : %s\n", root->ch, code);
        return;
    }
    code[top] = '0';
    generateCodes(root->left, code, top + 1, codes);
    code[top] = '1';
    generateCodes(root->right, code, top + 1, codes);
}

int main() {
    int n, i;
    char ch;
    char code[100];
    char codes[256][100] = {{0}};
    char message[1000];

    printf("Enter number of characters: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Invalid number of characters.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        int freq;
        printf("Enter character and frequency: ");
        scanf(" %c %d", &ch, &freq);
        if (freq <= 0) {
            printf("Frequency must be positive.\n");
            return 1;
        }
        insert(createNode(ch, freq));
    }
    printf("\nHuffman Tree Merging Steps:\n");
    while (size > 1) {
        struct Node *left = extractMin();
        struct Node *right = extractMin();
        struct Node *parent =
            createNode('$', left->freq + right->freq);
        parent->left = left;
        parent->right = right;
        printf("%d + %d = %d\n",
               left->freq, right->freq, parent->freq);
        insert(parent);
    }
    struct Node *root = extractMin();
    printf("\nHuffman Codes:\n");
    generateCodes(root, code, 0, codes);
    printf("\nEnter message to encode (enter - for none): ");

    getchar();
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    if (strcmp(message, "-") != 0) {

        int totalBits = 0;
        int valid = 1;
        printf("\nEncoded Binary String:\n");
        for (i = 0; message[i] != '\0'; i++) {
            unsigned char c = (unsigned char)message[i];
            if (codes[c][0] == '\0') {
                printf("\nCharacter '%c' not found!\n", c);
                valid = 0;
                break;
            }
            printf("%s", codes[c]);

            totalBits += strlen(codes[c]);
        }

        if (valid) {
            printf("\n\nTotal Bits Required = %d\n",
                   totalBits);
        }
    } else {
        printf("No message provided.\n");
    }

    printf("\nTime Complexity = O(n log n)\n");

    return 0;
}
