#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{  int passcheck=0;

     p:
         system("cls");
      cout<<"Encryptor V 1.0"<<endl<<"Made By Priyanshu\n";
      if(passcheck==1)
        cout<<"wrong access key"<<endl;
    string pass="";
    char ch;

    cout<<"Enter access key: ";
      ch =_getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
    if(pass == "admin123")
    {
        system("cls");

    int cnt=1;
    FILE *fp;
    char ch[100],check[5];
    char filename[20];
    cout<<"Encryptor V 1.0"<<endl<<"Made By Priyanshu\n";
    z: cout<<"\n Enter new filename (An original and another encrypted filename will be created using this name):";
char filename1[100];

    gets(filename);
strcpy(filename1,filename);
    strcat(filename,".txt");
    fp=fopen(filename,"r");
    if(fp!=NULL){
                        cout<<"File with same name already exists . Replace previous file? (yes/no)\n";
                        gets(check);
                        if(!strcmp(check,"no"))
                            goto z;
                }


    fp=fopen(filename,"w");
    cout<<endl<<"enter message .. HIT 'ENTER' KEY TWICE TO FINISH WRITING :\n";

    while(strlen(gets(ch))>0)
    {
        fputs(ch,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    char c,c1;
    fp=fopen(filename,"r");
   // cout<<"1";
   char encfilename[100],enc[100],temp[10]="enc";

   //strcat((strcpy(strcat(temp,filename),enc)));
     strcpy(encfilename,filename1);
        strcat(temp,encfilename);
        strcpy(enc,temp);
       strcat(temp,".txt");
    strcpy(encfilename,temp);


    FILE *f2 ;
   // cout<<encfilename;
    //system("pause");
    f2=fopen(encfilename,"w");
        while(1)
    {
        c=getc(fp);
        if(c==EOF)
            break;
        //c1=(char)(((int)c+(18)));
        c1=(char)(((int)c+(cnt*3))-cnt);
        fputc(c1,f2);
        cnt++;

    }
    system("cls");
    cout<<"Encryptor V 1.0"<<endl<<"Made By Priyanshu\n\n";
     cout<<"Encrypting file";
    Sleep(1000);
    cout<<".";
       Sleep(1000);
    cout<<".";
     Sleep(1000);
    cout<<"."<<endl;
    Sleep(600);




    cout<<"\nFile Encrypted..";
    cout<<"\nNOTE :-  YOUR ENCRYPTED FILE NAME IS  '"<<enc<<"'\n";


    fclose(fp);
    fclose(f2);
    system("pause");
    }
    else
        { passcheck=1;
    goto p;
        }
}
