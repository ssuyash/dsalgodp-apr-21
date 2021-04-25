#include <iostream>

using namespace std;

int num ;  //declaration, init

char ch = 'a';

bool isUnderstood = true; 

char name[] = "suyash";



int main(){
    cout << "Hello World";
    int nums[5] = {1, 3, 5, 7, 8};
    string stations[] = {"MHOW", "MITM", "RAU", "SILCITY", "RGCIR", "VISHNU", "BHNWR" };
    int distances[] = {0, 6, 13, 15, 18, 21, 22 };
    int time[] = {0, 10, 15};
    cout<< sizeof(stations);

    string src, dst;
    cin >> src >> dst;

    cout << src << dst;


    cout << stations[0];
    return 0;
}