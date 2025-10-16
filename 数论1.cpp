//2025.8.25
//Acwing 数论直播一，质数与约数
//质数判断
/*
    int n;
    if(n<2) cout<<"No"<<endl;
    for(int i=2;i<=n/i;i++){
        if(n%i==0){
            cout<<"No"<<endl;
        }
    }
    cout<<"Yes"<<endl;

*/
//分解质因数
/*
 void solve()
{
    int a;
    cin>>a;
    for(int i=2;i<=a/i;i++){
        if(a%i==0){
            int s=0;
            while(a%i==0){
                a/=i;
                s++;
            }
            cout<<i<<" "<<s<<endl;
        }
    }
    if(a>1) cout<<a<<" "<<1<<endl;
    cout<<endl;
}

*/
//埃拉托斯特尼筛法
/*
    int n,cnt=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(!str[i]){
            prime[cnt++]=i;
            for(int j=i+i;j<=n;j+=i) str[j]=1;
        }
    }
    cout<<cnt<<endl;
*/
//线性筛（欧拉筛）
/*
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(!str[i]){
            prime[cnt++]=i;
        }
        for(int j=0;prime[j]<=n/i;j++){
            str[prime[j]*i]=1;
            if(i%prime[j]==0) break;
        }
    }
    cout<<cnt<<endl;
    
*/







*/
