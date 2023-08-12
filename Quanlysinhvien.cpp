//#include <iostream>
//#include <string>
//using namespace std;
//struct Student
//{
//    int msv;
//    string name;
//    float a, b, c;
//};
//
//Student f[100];
//
//void add(int n)
//{
//    for(int d=1;d<=n;d++)
//    {
//        f[d].msv = d;
//        cin.ignore();
//        getline( cin, f[d].name);
//        cin >> f[d].a >> f[d].b >> f[d].c;
//    }
//}
//
//void change(int d)
//{
//    cin.ignore();
//    getline( cin, f[d].name);
//    cin >> f[d].a >> f[d].b >> f[d].c;
//}
//
//void show(int d)
//{
//    for (int i = d; i >= 1; i--)
//    {
//        cout << f[i].msv <<"\t";
//        cout << f[i].name <<"\t";
//        cout << f[i].a <<"\t"<< f[i].b <<"\t"<< f[i].c <<  endl;
//    }
//}
//
//int main()
//{
//    int n;
//    while (1)
//    {
//        int x;
//        cin >> x;
//        if (x == 1)
//        {
//            cin >> n;
//            add(n);
//            cout << n <<  endl;
//        }
//        else if (x == 2)
//        {
//            int m;
//            cin >> m;
//            change(m);
//            cout << m <<  endl;
//        }
//        else
//        {
//            show(n);
//            return 0;
//        }
//    }
//}

#include <iostream>
#include <string>
using namespace std;
struct sinhvien
{
    int ma;
    string ten;
    float a, b, c;
};

struct sinhvien ds[100];

void them(int x)
{
	for(int i=1;i<=x;i++)
	{
		cin.ignore();
		ds[i].ma=i;
		getline(cin,ds[i].ten);
		cin>>ds[i].a>>ds[i].b>>ds[i].c;
	}
}

void sua(int y)
{
	cin.ignore();
	getline(cin,ds[y].ten);
	cin>>ds[y].a>>ds[y].b>>ds[y].c;
}

void xuat(int x)
{
	for(int i=x;i>0;i--)
	{
		cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].a<<" "<<ds[i].b<<" "<<ds[i].c<<endl;
	}
}
int main()
{
	int n,x,y;
	while(1)
	{	
		cin>>n;	
		if(n==1)
		{
			cin>>x;
			them(x);
			cout<<x<<endl;
		}
		else if(n==2)
		{
			cin>>y;
			sua(y);
			cout<<y<<endl;
		}
		else
		{
			xuat(x);
			return 0;
		}
	}
}
