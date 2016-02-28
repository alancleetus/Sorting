//Sorting programs

#include <iostream>

using namespace std;

void bubbleSort(int [], int Size);
void searchSort(int arr[], int Size);
void duplicationSort(int arr[], int Size);

int main()
{
    const int Size = 5;
    int arr[Size] = {5,4,6,3,7};

    for(int i = 0; i<Size; i++){
        cout<<arr[i]<<endl;
    }

    //bubbleSort(arr, Size);

    //searchSort(arr, Size);

    duplicationSort(arr, Size);

    cout<<endl;

    for(int i = 0; i<Size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

void bubbleSort(int arr[], int Size)
{
    for(int j = 0; j<Size; j++){
        for(int i = 0; i<Size-1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void searchSort(int arr[], int Size)
{
    int flag;

    for(int j = 0; j<Size-1; j++){
        int one = arr[j];
        int two = arr[j+1];

        for(int i = j+2; i<Size; i++){

            if(two > arr[i]){
                two = arr[i];
                flag = i;
            }
        }
        if(one>two){
            int temp = arr[j];
            arr[j] = arr[flag];
            arr[flag] = temp;
        }
    }
}

void duplicationSort(int arr[], int Size)
{
    int duplicate[Size];

    int highest = arr[0];
    for(int i= 0; i<Size; i++){
        if(highest < arr[i]){
            highest = arr[i];
        }
    }
    int replacement = highest+1;

    for(int k= 0; k<Size; k++){
        int flag;
        int lowest = replacement;
        for(int i= 0; i<Size; i++){
            if(lowest > arr[i]){
                lowest = arr[i];
                flag = i;
            }
        }
        duplicate[k] = lowest;
        arr[flag] = replacement;
    }
        for(int i = 0; i<Size; i++){
            arr[i] = duplicate[i];
        }
}
