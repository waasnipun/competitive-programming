#!/usr/bin/env python3

buckets = 200 #array size

class hashEntry:
    def __init__(self,key,value):
        self.key = key
        self.value = value

class hashTable:
    def __init__(self):
        self.table = [None for i in range(buckets)]
    def hashFunc(self,key):
        #hash function
        return key%buckets
    def insert(self,key,value):
        h = self.hashFunc(key)
        while(self.table[h]!=None and self.table[h].key!=key):
            h = self.hashFunc(h+1)
        if self.table[h]!=None:
            self.table[h] = None
            print("Value already exist! overwriting...\n")
        self.table[h] = hashEntry(key,value)
        print("Value stored! \n")
    def remove(self,key):
        h = self.hashFunc(key)
        while self.table[h]!=None and self.table[h].key!=key:
            h = self.hashFunc(h+1)
        if self.table[h]!=None:
            self.table[h] = None
            print("Element Deleted!\n")
        else:
            print("Element not Found!\n")
    def search(self,key):
        h = self.hashFunc(key)
        while self.table[h]!=None and self.table[h].key!=key:
            h = self.hashFunc(h+1)
        if self.table[h]!=None:
            return self.table[h].value
        else:
            print("Element not Found!\n")
hash = hashTable()
print("Press 0 to insert")
print("Press 1 to remove")
print("Press 2 to search")
print("Press 3 to End Program\n")
while True:
    n = int(input("Enter the operation: "))
    if n==0:
        key = int(input("Enter the key: "))
        value = int(input("Enter the value: "))
        hash.insert(key,value)
    elif n==1:
        key = int(input("Enter the key: "))
        hash.remove(key)
    elif n==2:
        key = int(input("Enter the key: "))
        print("Value : ",hash.search(key),"\n")
    elif key==3:
        break
