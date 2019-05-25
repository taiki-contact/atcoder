#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    int n,m;
    cin >> n >> m;
    int *food;
    food = new int[m];
//    for(int i=0;i<m;i++)
//    {
//        food[i]=0;
//    }
    for(int i=0;i<n;i++)
    {
        int k;
        cin >>k;
        int A;
        for(int l=0;l<k;l++)
        {
            scanf("%d",&A);
            food[A-1]++;
//            printf("%d ",A);
//            printf("%d ",food[A]);
        }
//        printf("\n");
    }
    int all=0;
    for(int i=0;i<m;i++)
    {
        if(food[i]==n) { all++; }
    }
    // 出力
    cout << all << endl;
    return 0;
}
