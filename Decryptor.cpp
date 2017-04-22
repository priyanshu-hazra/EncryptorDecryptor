#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{   int cnt=1;
    FILE *fp;
    char ch[100];
    char filename[20];
    cout<<"Decryptor V 1.0"<<endl<<"Made By Priyanshu\n\n";
  z:  cout<<"  Enter encrypted filename :";
    gets(filename);
   // fp=fopen(filename,"r");

//    fclose(fp);
char filename1[100];
strcpy(filename1,filename);
strcat(filename1,".txt");
    char c,c1;
    fp=fopen(filename1,"r");
    if(fp==NULL)
    {
        cout<<"File Not Present\n";
        goto z;
    }
    //cout<<"1";
   // cout<<"you input string is \n";
    FILE *f2 ;
    char decfile[100]="dec",printdest[100];
    strncpy(printdest,filename+3,(strlen(filename)));
    // to copy certain parts of a string, strncpy(dest,src+beg index,endindex-begindex)
    strcat(decfile,printdest);
  //  cout<<decfile;
    strcpy(printdest,decfile);
  //  cout<<endl<<printdest<<endl<<decfile;
    strcat(decfile,".txt");
  //  cout<<endl<<decfile;
  //  cout<<endl<<filename1;
    f2=fopen(decfile,"w");
        while(1)
    {
        c=getc(fp);
        if(c==EOF)
            break;
        //c1=(char)((int)c-(18));
        c1=(char)(((int)c+cnt)-(cnt*3));
        fputc(c1,f2);
        cnt++;
    }
    //cout<<endl<<"hello";
    system("cls");
    cout<<"Encryptor V 1.0"<<endl<<"Made By Priyanshu\n\n";
    cout<<"Decrypting file";

    Sleep(1000);
    cout<<".";
       Sleep(1000);
    cout<<".";
     Sleep(1000);
    cout<<"."<<endl;
    Sleep(600);
    cout<<"File Decrypted...";
    fclose(fp);
    fclose(f2);
    Sleep(300);
    cout<<"\nNOTE:- name of your decrypted file is  '"<<printdest<<"'";
    cout<<"\nWant to open Decrypted file?  (yes/no)"<<endl;
    remove(filename1);
    char response[5];
    cin>>response;
   if(!strcmp(response,"yes"))
        system(decfile);


        cout<<"Terminating process...";
    Sleep(600);
    cout<<"Enter 1 to know more about me!!";
    int ent;
    cin>>ent;
    if(ent==1)
        system("start chrome http://priyanshuhazra.tk");

    system("pause");

}

