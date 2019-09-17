#include <iostream>

using namespace std;

int main(void)
{

int height = 10;
int width = 9;

int **arr = new int *[height];

    for(int i=1; i<height; i++)
    {
         arr[i] =new int[width];
    }

    for(int i=1;i<=height;i++)
    {
        for(int j=1;j<=width;j++)
        {
            arr[i][j] = i*j;
            std::cout<<arr[i][j]<<' ';
        }
        cout<<std::endl;
    }

for(int i=0;i<height;++i)
{
    delete[] arr[i];
}
delete []arr;
}
