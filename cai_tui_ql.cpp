#include <bits/stdc++.h>
using namespace std;

int x[102], a[102], c[102], Xopt[102];
int Fopt, B, n;

int khoiluong(){
    int kl = 0;
    for(int i = 1; i<=n; ++i)
        kl += x[i]*a[i];
    return kl;
}

int giatri()
{
    int gt = 0;
    for (int i = 1; i<=n; ++i)
        gt += x[i]*c[i];
    return gt;
}

void update(){
    for (int i = 1; i<=n; ++i)
        Xopt[i] = x[i];
    Fopt = giatri();
}


void Try(int i){
    for (int j = 0; j<=1; ++j)
    {
        x[i] = j;
        if (i == n)
        {
            if (khoiluong() <= B)
                if (Fopt < giatri()) // Neu gia tri hien tai lon hon gia tri toi uu, update
                    update();
        }
        else Try(i+1);
    }
}

void nhap(){
	fstream data("data.in", ios::in);
    data >> n >> B;
    for (int i = 1; i<=n; ++i)
        data >> c[i];
    for (int i = 1; i<=n; ++i)
        data >> a[i];
}

int main(){	
	nhap();
    Try(1);
    cout << Fopt << endl;
    for(int i = 1; i <= n; i++){
    	cout << Xopt[i] << ' ';
	}
    return 0;
}
