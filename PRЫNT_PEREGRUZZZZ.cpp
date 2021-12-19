#include <iostream>
using namespace std;
void print(int *iarrai){
    
    cout << "Massive int's: ";
    int n = sizeof(*iarrai);
    
    for(int i = 0; i < n; i++){
        cout << iarrai[i] << " ";
        };
    cout << '\n';

};

void print(float *flarrai){
    cout << "Massive int's: ";
    int n = sizeof(*flarrai);
    
    for(int i = 0; i < n; i++){
        cout << flarrai[i] << " ";
        };
    cout << '\n';
};

void print(const char *word){
    while(*word){cout << *word; word++;};
    cout <<'\n';
};

int main()
{
    print("Testing");
    int a[] = {1, 2, 3, 4};
    float b[] = {5, 6, 7, 8};
    print(a);
    print(b);
    

    return 0;
}



