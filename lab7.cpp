#include<iostream>
#include<string>
using namespace std;

class account
{
  int no;
  float amount=0;
  
  public:
  void set(int x)
  {
      no=x;
  }
 
  int get_no()
  {
      return(no);
  }
  float get_amount()
  {
      return(amount);
  }
};

class savings:public account
{
    float i=0;
    float amount;
    int no;
    
    public:
    int set_s()
    {
        amount=get_amount();
        no=get_no();
        if(no/100==1)
        {
            return(1);
        }
        else
        {
            cout<<"Invalid account number"<<endl;
            cout<<"For savings account first number in account number should be 1"<<endl;
            return(0);
        }
    }
    void set_interest(float x)
    {
        i=x;
    }
    float get_interest()
    {
        return(i);
    }
    float get_s_amount()
    {
        return(amount);
    }
    void change_interest()
    {
        cout<<"Enter interest rate in percentage"<<endl;
        cin>>i;
    }
    void credit()
    {
        float x;
        cout<<"Enter the amount you want to credit in your account"<<endl;
        cin>>x;
        amount=amount+x;
        cout<<"Total balance in the account without interest after depositing "<<x<<" rupees is"<<amount<<endl;
    }
    
    void debit()
    {
        float x;
        cout<<"Enter the amount you want to withdraw"<<endl;
        cin>>x;
        if(x>amount)
        {
            cout<<"The amount you want to withdraw from your account exceeds your bank balance"<<endl;
        }
        else
        {
            amount=amount-x;
            cout<<x<<" rupees is deducted from your savings account"<<endl;
            cout<<"Your balance in savings account is "<<amount<<endl;
        }
    }
    
    void cal_interest()
    {
        if(i==0)
        {
            cout<<"Interest value is zero"<<endl;
            cout<<"Please update the interset"<<endl;
        }
        else
        {
            float b=(i*amount)/100;
            cout<<"Interest amount is "<<b<<endl;
        }
        
    }
    float cal_amount()
    {
        float a=amount+(i*amount)/100;
        cout<<"Total balance with interest is "<<a<<endl;
        return(a);
    }
    
};

class checking:public account
{
    float fee;
    float amount;
    int no;
    
    public:
    int set_c()
    {
        amount=get_amount();
        no=get_no();
        if(no/100==2)
        {
            return(1);
        }
        else
        {
            cout<<"Invalid account number"<<endl;
            cout<<"For checking account first number in account number should be 2"<<endl;
            return(0);
        }
    }
    void set_fee(int y)
    {
        fee=y;
    }
    float get_fee()
    {
        return(fee);
    }
    float get_c_amount()
    {
        return(amount);
    }
    void change_fee()
    {
        cout<<"Enter new percentage of amount to reduce per transaction"<<endl;
        cin>>fee;
    }
    void credit()
    {
        if(fee==0)
        {
            cout<<"Transaction fee is zero"<<endl;
            cout<<"Please update the transaction fee"<<endl;
        }
        else
        {
            float x;
            cout<<"Enter the amount you want to deposit"<<endl;
            cin>>x;
            amount=amount+x;
            x=(x*fee)/100;
            amount=amount-x;
            cout<<"Total amount after depositing "<<amount+x<<" rupees is "<<amount<<endl;
            cout<<x<<" rupees got deducted due to transaction fee"<<endl;
        }
        
    }
    void debit()
    {
        if(fee==0)
        {
            cout<<"Transaction fee is zero"<<endl;
            cout<<"Please update the transaction fee"<<endl;
        }
        else
        {
            float x;
            cout<<"Enter the amount you want to withdraw"<<endl;
            cin>>x;
            x=x+x*(fee/100);
            if(x>amount)
            {
              cout<<"The amount you want to withdraw from your account exceeds your bank balance"<<endl;
            }
            else
            {
              amount=amount-x;
              cout<<x<<" rupees including transaction fee is deducted from your checking account"<<endl;
              cout<<"Your balance in checking account is "<<amount<<endl;
              cout<<endl;
            }
        }
        
        
    }
    
};

int main()
{
    account t;
    int i=0,j=0;
    int choice;
    float x,y;
    savings a[100];
    checking b[100];
    while(1)
    {
        cout<<"1. Open Account (Savings or Checking Account)"<<endl;
        cout<<"2. Credit (Savings or Checking Account)"<<endl;
        cout<<"3. Debit (Savings or Checking Account)"<<endl;
        cout<<"4. Change/Update Interest rate (Savings Account)"<<endl;
        cout<<"5. Calculate Interest (Savings Account - Print)"<<endl;
        cout<<"6. Calculate and Update Interest (Savings Account - Credit)"<<endl;
        cout<<"7. Change/Update Fee Amount (Checking Account)"<<endl;
        cout<<"8. Print Checking Fee (Checking Account)"<<endl;
        cout<<"9. Search Customer Details"<<endl;
        cout<<"10. Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                int temp,k,s=0;
                cout<<"1.Open savings account"<<endl;
                cout<<"2.Open checking account"<<endl;
                cin>>temp;
                switch(temp)
                {
                    case 1:
                    {
                        int temp,no;
                        i=i+1;
                        cout<<"Enter account number"<<endl;
                        cin>>no;
                        for(k=1;k<=i;k++)
                        {
                            if(no==a[k].get_no())
                            {
                                s=1;
                            }
                            else
                            {
                                s=0;
                            }
                        }
                        a[i].set(no);
                        temp=a[i].set_s();
                        if((temp)&&(s==0))
                        {
                            
                            a[i].get_no();
                            a[i].get_amount();
                            for(k=1;k<=i;k++)
                            {
                                a[k].set_interest(a[1].get_interest());
                            }
                        }
                        else if(s==1)
                        {
                            cout<<"This account number already exists."<<endl;
                            cout<<"Try another account number"<<endl;
                        }
                        else
                        {
                            i=i-1;
                        }
                        
                        break;
                    }
                    case 2:
                    {
                        int temp,k,no;
                        j=j+1;
                        cout<<"Enter account number"<<endl;
                        cin>>no;
                        for(k=1;k<=j;k++)
                        {
                            if(no==b[k].get_no())
                            {
                                s=1;
                            }
                            else
                            {
                                s=0;
                            }
                        }
                        b[j].set(no);
                        temp=b[j].set_c();
                        
                        if((temp)&&(s==0))
                        {
                            b[j].set_fee(y);
                            b[j].get_no();
                            b[j].get_amount();
                            for(k=1;k<=i;k++)
                            {
                                b[k].set_fee(b[1].get_fee());
                            }
                        }
                        else if(s==1)
                        {
                            cout<<"This account number already exists."<<endl;
                            cout<<"Try another account number"<<endl;
                        }
                        else
                        {
                            j=j-1;
                        }
                        
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                int temp;
                cout<<"1.Deposit in savings account"<<endl;
                cout<<"2.Deposit in checking account"<<endl;
                cin>>temp;
                switch(temp)
                {
                    case 1:
                    {
                        int n,k=1,s=0;
                        cout<<"Enter account number"<<endl;
                        cin>>n;
                        if(i==0)
                        {
                            cout<<"There is no savings account with account number "<<n<<endl;
                        }
                        else if(n/100==1)
                        {
                            while(k<=i)
                            {
                              if(n==a[k].get_no())
                              {
                                a[k].credit();
                                s=s+1;
                                break;
                              }
                              else if((k==i)&&(s==0))
                              {
                                cout<<"There is no savings account with account number "<<n<<endl;
                                break;
                              }
                              else
                              {
                                k=k+1;
                              }
                           }
                        }
                        else
                        {
                            cout<<"Invalid account number"<<endl;
                        }
                            
                
                       
                        break;
                    }
                    case 2:
                    {
                        int n,k=1,s=0;
                        cout<<"Enter account number"<<endl;
                        cin>>n;
                        if(j==0)
                        {
                             cout<<"There is no checking account with account number "<<n<<endl;
                        }
                        else if(n/100==2)
                        {
                            while(k<=j)
                            {
                              if(n==b[k].get_no())
                              {
                                b[k].credit();
                                s=s+1;
                                break;
                              }
                              else if((k==j)&&(s==0))
                              {
                                cout<<"There is no checking account with account number "<<n<<endl;
                                break;
                              }
                              else
                              {
                                k=k+1;
                              }
                            }
                        }
                        else
                        {
                            cout<<"Invalid account number"<<endl;
                        }
                        
                        break;
                }
            }
            break;
        }
        case 3:
        {
            int temp;
            cout<<"1.Withdraw money from savings account"<<endl;
            cout<<"2.Withdraw money from checking account"<<endl;
            cin>>temp;
            switch(temp)
            {
                case 1:
                {
                    int n,k=1,s=0;
                        cout<<"Enter account number"<<endl;
                        cin>>n;
                        if(n/100==1)
                        {
                            while(k<=i)
                            {
                              if(n==a[k].get_no())
                              {
                                a[k].debit();
                                s=s+1;
                                break;
                              }
                              else if((k==i)&&(s==0))
                              {
                                cout<<"There is no savings account with account number "<<n<<endl;
                                break;
                              }
                              else
                              {
                                k=k+1;
                              }
                           }
                        }
                        else
                        {
                            cout<<"Invalid account number"<<endl;
                        }
                        
                        break;
                }
                case 2:
                {
                    int n,k=1,m=0;
                    cout<<"Enter the account number"<<endl;
                    cin>>n;
                    if(n/100==2)
                    {
                        while(k<=j)
                        {
                          if(b[k].get_no()==n)
                          {
                            float x=b[k].get_c_amount();
                            if(x==0)
                            {
                               cout<<"Bank balance is zero"<<endl;
                            }
                            else
                            {
                               b[k].debit();
                            }
                            m=1;
                            break;
                          }
                          else if((k==j)&&(m==0))
                          {
                            cout<<"There is no savings account with account number "<<n<<endl;
                            break;
                          }
                          else
                          {
                            k++;
                          }
                       }
                    }
                    else
                    {
                        cout<<"Invalid account number"<<endl;
                    }
                    
                      break;
                }
            }
            break;
        }
        case 4:
        {
            float temp;
            int k;
            cout<<"Enter new interest rate in percentage"<<endl;
            cin>>temp;
            for(k=1;k<=i;k++)
            {
                a[k].set_interest(temp);
            }
            break;
        }
        case 5:
        {
            int n,m=0,k=1;
            cout<<"Enter the account number "<<endl;
            cin>>n;
            while(k<=i)
            {
                if(a[k].get_no()==n)
                {
                    float x=a[k].get_s_amount();
                    if(x==0)
                    {
                        cout<<"Bank balance is zero"<<endl;
                    }
                    else
                    {
                        a[k].cal_interest();
                    }
                    m=1;
                    break;
                }
                else if((k==i)&&(m==0))
                {
                    cout<<"There is no savings account with account number "<<n<<endl;
                    break;
                }
                else
                {
                    k++;
                }
            }
            break;
        }
        case 6:
        {
            int n,m=0,k=1;
            cout<<"Enter the account number "<<endl;
            cin>>n;
            while(k<=i)
            {
                if(a[k].get_no()==n)
                {
                    float x=a[k].get_s_amount();
                    if(x==0)
                    {
                        cout<<"Bank balance is zero"<<endl;
                    }
                    else
                    {
                       a[k].cal_interest();
                        a[k].cal_amount();
                    }
                    m=1;
                    break;
                }
                else if((k==i)&&(m==0))
                {
                    cout<<"There is no savings account with account number "<<n<<endl;
                    break;
                }
                else
                {
                    k++;
                }
            }
            break;
        }
        case 7:
        {
            float temp;
            int k;
            cout<<"Enter the  transaction fee in percentage"<<endl;
            cin>>temp;
            for(k=1;k<=i;k++)
            {
                b[k].set_fee(temp);
            }
            break;
        }
        case 8:
        {
            int x;
            cout<<"Enter the amount you want to transact"<<endl;
            cin>>x;
            float f=b[1].get_fee();
            f=(x*f)/100;
            cout<<"Transaction fee for amount "<<x<<" rupees is "<<f<<" rupees"<<endl;
            break;
        }
        case 9:
        {
            int n,x,k=1,m=0;
            cout<<"Enter account number"<<endl;
            cin>>n;
            x=n/100;
            if(x==1)
            {
                while(k<=i)
                {
                    if(n==a[k].get_no())
                    {
                        cout<<"Account Type : Savings"<<endl;
                        cout<<"Account Numner : "<<a[k].get_no()<<endl;
                        cout<<"Interest rate is "<<a[k].get_interest()<<endl;
                        cout<<"Bank balance is "<<a[k].get_s_amount()<<endl;
                        m=1;
                        break;
                    }
                    else if((k==i)&&(m==0))
                    {
                        cout<<"There is no account with account number "<<n<<endl;
                        break;
                    }
                    else
                    {
                        k=k+1;
                    }
                }
            }
            else if(x==2)
            {
                while(k<=j)
                {
                    if(n==b[k].get_no())
                    {
                        cout<<"Account Type : Checking"<<endl;
                        cout<<"Account Numner : "<<b[k].get_no()<<endl;
                        cout<<"Transaction Fee is "<<b[k].get_fee()<< "percent"<<endl;
                        cout<<"Bank balance is "<<b[k].get_c_amount()<<endl;
                        m=1;
                        break;
                    }
                    else if((k==j)&&(m==0))
                    {
                        cout<<"There is no account with account number "<<n<<endl;
                        break;
                    }
                    else
                    {
                        k=k+1;
                    }
                }
                
            }
            else
            {
                cout<<"Invalid account number "<<n<<endl;
            }
            break;
            
        }
        case 10:
        {
            exit(1);
            break;
        }
    }
}
return 0;
}