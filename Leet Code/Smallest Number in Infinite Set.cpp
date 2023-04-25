#include <set>
using namespace std;

class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        for(int i = 1; i <= 1000; i++) {
            integers.insert(i);
        }
    }

    int popSmallest() {
        int smallest = *integers.begin();
        integers.erase(integers.begin());
        return smallest;
    }

    void addBack(int num) {
        if(integers.find(num) == integers.end()) {
            integers.insert(num);
        }
    }

private:
    set<int> integers;
};
