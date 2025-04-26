/*
Jesus Zafra
CIS 240 - Final Project

Hash Table with Linear Probing

Functions to Include:
    *Constructor(initial table size)*
    *Copy constructor*
    *Assignment operator*
    *Destructor*
    *Insert(data)*
    *Remove(data)*
    *Search(data)*
    *Count()* – returns the number of data in the hash table
    *isEmpty()*
    *isFull()*
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>


using namespace std;

class Entry {
private:
    int data;
    bool occupied;
public:
    Entry() {
        data = 0;
        occupied = false;
    }
    void setData(int d) {
        data = d;
        occupied = true;
    }
    int getData() const {
        return data;
    }
    bool isOccupied() const {
        return occupied;
    }
    void setToRemoved() {
        occupied = false;
    }
    bool isUndefined() const {
        return (!occupied && data == 0);
    }
};

class HashTableLinear {
private:
    Entry* arr;
    int table_size;
    int num_entries;

    int hashFunction(int data) const {
        return data % table_size;
    }
    int hashDelta(int data) const {
        return data % (table_size - 2) + 1;
    }

    //Is Prime
    bool is_prime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    //Is Not Prime
    bool is_not_prime(int n) {
        if (n <= 1) {
            return true;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return true;
            }
        }
        return false;
    }

public:
    //Constructor
    HashTableLinear(int size) {
        table_size = size;
        num_entries = 0;
        arr = new Entry[table_size];
    }

    //Copy Constructor 
    HashTableLinear(const HashTableLinear& other) {
        table_size = other.table_size;
        num_entries = other.num_entries;
        arr = new Entry[table_size];
        for (int i = 0; i < table_size; i++) {
            arr[i] = other.arr[i];
        }
    }

    //Assignment Operator
    HashTableLinear& operator=(const HashTableLinear& other) {
        if (this != &other) {
            delete[] arr;
            table_size = other.table_size;
            num_entries = other.num_entries;
            arr = new Entry[table_size];
            for (int i = 0; i < table_size; i++) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }

    //Desctructor
    ~HashTableLinear() {
        delete[] arr;
    }

    //Insert
    void insert(int data) {
        if (isFull()) {
            expand();
        }

        int key = hashFunction(data);
        int index = key;

        int newKey = hashDelta(data);

        if(arr[index].isOccupied()){
            while (arr[index].isOccupied()) {
                if(index > table_size){
                    index = 0;
                }
                index = (index + newKey) % table_size;
            }
            arr[index].setData(data);
            num_entries++;
        } else {
            arr[index].setData(data);
            num_entries++;
        }

        
    }

    //Remove
    void remove(int data) {
        int key = hashFunction(data);
        int index = key;
        while (!arr[index].isUndefined()) {
            if (arr[index].isOccupied() && arr[index].getData() == data) {
                arr[index].setToRemoved();
                num_entries--;
                return;
            }
            index = (index + hashDelta(data)) % table_size;
        }
    }

    //Search
    bool search(int data) const {
        int key = hashFunction(data);
        int index = key;
        while (!arr[index].isUndefined()) {
            if (arr[index].isOccupied() && arr[index].getData() == data) {
                return true;
            }
            index = (index + hashDelta(data)) % table_size;
        }
        return false;
    }

    //Count
    int count() const {
        return num_entries;
    }

    //Is Empty
    bool isEmpty() const {
        return num_entries == 0;
    }

    //Is Full
    bool isFull() const {
        return num_entries == table_size;
    }

    //Expand
    void expand() {
        int new_size = table_size * 2;

        while (is_not_prime(new_size))
        {
            new_size = new_size + 1;
        }

        cout << "New size set to: " << new_size << endl;
        table_size = new_size;

        Entry* new_arr = new Entry[new_size];
        for (int i = 0; i <= table_size; i++) {
            if (arr[i].isOccupied()) {
                int key = hashDelta(arr[i].getData());
                int index = key;
            }
        }
        delete[] arr;
        arr = new_arr;
    }

    //Probe
    int probe(Entry key) {
        int totalProbes;
        bool found = false;
        int index = hashFunction(key.getData());
        int hashDelta = key.getData() % ((table_size - 2) + 1);
        while (!found && !arr[index].isUndefined()) {
            if (arr[index].isOccupied()) {
                if (key.getData() == (arr[index].getData())) {
                    found = true;
                } else {
                    index = (index + hashDelta) % table_size;
                }
            } else {
                index = (index + hashDelta) % table_size;
            }
            
        }
        if (!found) totalProbes++;
        return totalProbes;
    }
};

//Is Prime
    bool is_prime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

//Is Not Prime
    bool is_not_prime(int n) {
        if (n <= 1) {
            return true;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return true;
            }
        }
        return false;
    }

int main(){
    int tableSize = 0;
    int elements = 0;
    int probe = 0;
    int total_probes = 0;
    int index = 0;

    Entry key;
    Entry data;

    cout << "Initial Size: ";
    cin >> tableSize;

    if(is_prime(tableSize)){
        cout << "** Initial table size is a prime number."  << endl;
    } else {
        while (is_not_prime(tableSize))
        {
            tableSize++;
        }
        cout << "** Initial table size was set to: " << tableSize << endl;
    } 

    HashTableLinear myTable(tableSize);

    cout << "Elements: ";
    cin >> elements;
    cout << " " << endl;

    for(int i = 0; i < elements; i++) {
        int random_number = rand() % 1000;
        myTable.insert(random_number);

        //Shows data and index
        data.setData(random_number);

    }

    for(int i = 0; i < elements; i++) {
        //Calculates total probes
        key.setData(index);
        total_probes = myTable.probe(key) + total_probes;
        index ++;
        
    }

    //Displays total probes
    cout << "Total Probes for Linear Probing: " << total_probes << endl;
 
}