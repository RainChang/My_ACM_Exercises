
#include<iostream>

using namespace std;
//void replaceSpace(char *str,int length) {
//
//        int countSpace=0;
//        int i=0;
//        for(;i<length;i++)
//        {
//            if(str[i]==' ')
//            {
//                countSpace++;
//            }
////            if(str[i]=='\0')
////                break;
//        }
//        int oldlength=i-1;
//        //char *newstr="";
//        int newLength=oldlength+countSpace*2-1;
//        for(int j=oldlength-1;j>=0;j--)
//        {
//            if(str[j]==' ')
//            {
//                str[newLength--]='0';
//                str[newLength--]='2';
//                str[newLength--]='\%';
//            }
//            else
//            {
//                str[newLength--]=str[j];
//            }
//        }
//	}


void replaceSpace(char *str,int length)
{
int numOfSpace = 0;
int str_size = 0;  //ԭ�ַ�������
     // �ȱ����ַ����ҵ��ո��������ȷ���µ��ַ�������
for(int i = 0; i < length; i++)
{
   if(str[i] == ' ')
{
numOfSpace++;
}
str_size++;
if(str[i] == '\0')
break;
}
int newLength = str_size + 2*numOfSpace;
newLength--;
       //��ԭ������ǰ�����������ǿո����δ��´��������Ϊ��ʼ��ӣ����ǿո�Ҳ���δӺ���ǰ��                �ӣ�������%20����ո�֪��ԭ��������ɣ��滻Ҳ��ɡ�
for(int i = str_size-1; i >=0; i--)
{
   if(str[i] != ' ')
str[newLength--] = str[i];
else
{
str[newLength--] = '0';
str[newLength--] = '2';
str[newLength--] = '%';
}
}

}
int main()
{
    char *str1="hello world";
    replaceSpace(str1,100);
    cout<<str1<<endl;
    return 0;

}

