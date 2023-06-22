#include <iostream>
using namespace std;

int main() {
    int dog, chicken;
    int sum,sum1, sumFeet;
    
    cin >> sum; 
    cin >> sumFeet;
    dog = (sumFeet-2*sum)/2;
    chicken = sum-dog;
    if (dog >= 0 && chicken >= 0&& sumFeet%2==0) {
        cout <<chicken<<" "<< dog << endl;
    }
    else {
        cout << "-1" << endl;
    }
}
