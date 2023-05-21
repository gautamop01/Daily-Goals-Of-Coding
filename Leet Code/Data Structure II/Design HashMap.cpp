class MyHashMap {
public:
    vector<int> m; // Vector to store key-value pairs
    int size; // Size of the hash map

    MyHashMap() {
        size = 1e6+1; // Set the size of the hash map to 1,000,001
        m.resize(size); // Resize the vector to the specified size
        fill(m.begin(), m.end(), -1); // Initialize all elements in the vector with -1 (indicating empty)
    }   
    
    void put(int key, int value) {
        m[key] = value; // Set the value for the given key in the hash map
    }
    
    int get(int key) {
        return m[key]; // Retrieve the value associated with the given key from the hash map
    }
    
    void remove(int key) {
        m[key] = -1; // Remove the key-value pair from the hash map by setting the value to -1
    }
};
