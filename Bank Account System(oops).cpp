#include<bits/stdc++.h>
using namespace std;
class bank{
private:
	int balance;
	int accno;
public:
	string holdername;
	void add(string h,int b,int an)
	{
		holdername = h;
		setbalance(b);
		setaccno(an);
	}
	void depoist(int d)
	{
		balance+=d;
	}
	void setbalance(int b)
	{
		balance = b;
	}
	void setaccno(int an)
	{
		accno = an;
	}
	int checkbalance()
	{
		return balance;
	}
	int getaccno()
	{
		return accno;
	}
	int withdraw(int n)
	{
		if(n > balance) return -1;
		balance-=n;
		return n;
	}
};
int main()
{
	bank b1;
	b1.add("Vivek",7000,1234567890);
	cout << b1.holdername << "\n";
	cout << b1.getaccno() << "\n";
	cout << b1.checkbalance() << "\n";
	b1.depoist(2000);
	cout << b1.checkbalance() << "\n";
	b1.withdraw(5000);
	cout << b1.checkbalance() << "\n";
}
