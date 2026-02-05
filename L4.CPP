// #include<iostream>
// using namespace std;

// int main(){
//     int i, n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     i = 1;
//     while (i<=n)
//     {
//         cout << i << " ";
//         i++;
//     }
    
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i,n,j;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     i = 1;
//     while (i<=n)
//     {
//         j=1;
//         while (j<=i)
//         {
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int i,n,j;
    n = 3;
    j = 1;
    while (j<=n)
    {
        cout<<j;
        j++;
        cout<<endl;
        int k = 1;
        while (k<=n)
        {
            cout<<k;
            k++;
        }
        
    }
    
    return 0;
}