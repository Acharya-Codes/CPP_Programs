#include <iostream>
using namespace std;
void sort(int num[], int size);
int main(){
    int num[] = {10,5,4,7,8,3,2,9,1,6};
    int size = sizeof(num) / sizeof(num[0]);

    for(int element : num){
        cout << element << " ";
    }

    sort(array,size);
    return 0;
}
void sort(int num[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
}