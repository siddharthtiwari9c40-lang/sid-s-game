import json
from solcx import compile_standard
from web3 import web3
with open("simplestorage.sol","r") as file:
    sfs=file.read()
    print(sfs)

cs=compile_standard(
    {
        "language":"Solidity",
        "sources":{"simplestorage.sol":{"content":sfs}},
        "settings":{
            "outputSelection":{
                "*":{"*":["abi","metadata","evm.bytecode","evm.sourceMap"]}
            }
        },
    },  
    solc_version="0.6.0",
)    
with open("compiled_code.json","w") as file:
    json.dump(cs,file)

# get byte code so that we can deploy it..
bytecode = cs["contracts"]["simplestorage.sol"]["SimpleStorage"]["evm"]["bytecode"]["object"]

# get abi   
abi = ccs["contracts"]["simplestorage.sol"]["SimpleStorage"]["abi"]

# for connecting to ganash(proxy block chain)
