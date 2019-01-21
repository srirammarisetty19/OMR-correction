#include<stdio.h>
int checker(int v,int no_of_ques,int single_start,int single_end,int single_pmarks,int single_nmarks,int multiple_start,int multiple_end,int multiple_pmarks,int multiple_nmarks,int martix_start,int martix_end,int matrix_pmarks,int matrix_nmarks,int int_pmarks,int int_nmarks,int intq_start,int intq_end,int op);
int checkerlist(int v,int no_of_ques,int single_start,int single_end,int single_pmarks,int single_nmarks,int multiple_start,int multiple_end,int multiple_pmarks,int multiple_nmarks,int martix_start,int martix_end,int matrix_pmarks,int matrix_nmarks,int int_pmarks,int int_nmarks,int intq_start,int intq_end,int op);
void rank(int tot_stu,int mat[],int k);
int main()
{
	int single_start,single_end,no_of_single,no_of_multiple,no_of_matrix,no_of_integers;
	int freq,i,j,k,roll,no_of_ques,single_pmarks,single_nmarks,multiple_start,multiple_end,multiple_pmarks,multiple_nmarks,intq_start,intq_end,int_pmarks,int_nmarks,tot_stu,martix_start,martix_end,matrix_pmarks,op,matrix_nmarks;
	printf("enter total no of students who attempted test:");
	scanf("%d",&tot_stu);
	int mat[tot_stu];
	printf("enter no of questions in exam:");
	scanf("%d",&no_of_ques);
	for(i=0;i<tot_stu;i++)
		{
		mat[i]=0;
		}
    printf("enter no. of single answer questions:");
    scanf("%d",&no_of_single);
	single_start=1;
	single_end=single_start+no_of_single-1;
	printf("enter positive marks:");
	scanf("%d",&single_pmarks);
    printf("enter negative marks:");
    scanf("%d",&single_nmarks);
    printf("enter no. of multiple questions:");
	scanf("%d",&no_of_multiple);
	multiple_start=single_end+1;
	multiple_end=multiple_start+no_of_multiple-1;
	printf("enter positive marks:");
	scanf("%d",&multiple_pmarks);
    printf("enter negative marks:");
    scanf("%d",&multiple_nmarks);
    printf("enter no. of matrix maching questions:");
    scanf("%d",&no_of_matrix);
	martix_start=multiple_end+1;
	martix_end=martix_start+no_of_matrix-1;
	printf("enter positive marks:");
	scanf("%d",&matrix_pmarks);
    printf("enter negative marks:");
    scanf("%d",&matrix_nmarks);
    printf("enter no. of integers questions:");
    scanf("%d",&no_of_integers);
	intq_start=martix_end+1;
    intq_end=intq_start+no_of_integers-1;
	printf("enter positive  marks:");
	scanf("%d",&int_pmarks);
	printf("enter negative marks:");
	scanf("%d",&int_nmarks);
	printf("press 'y' if u are a teacher\npress 's' if u r a student--->");
	char h, varada;
	scanf("%c", &varada);
	scanf("%c",&h);
	/*printf("\n varada : %d", multiple_nmarks);*/
	if(h=='y')
		{
		printf("press 'a' if u want to check all people\npress 's' for some people--->");
		char al;
		scanf("%s",&al);
		if(al=='a')
			{
				printf("\n*******************************************\n");
				printf("           MARKS OF STUDENTS               ");
				printf("\n*******************************************\n");
			for(i=1;i<=tot_stu;i++)
				{

				printf("------------------------------------------");
				printf("\nmarks for student with roll:%d :-",i);
				op=checker(i,no_of_ques,single_start,single_end,single_pmarks,single_nmarks,multiple_start,multiple_end,multiple_pmarks,multiple_nmarks,martix_start,martix_end,matrix_pmarks,matrix_nmarks,int_pmarks,int_nmarks,intq_start,intq_end,op);
				mat[i-1]=4;
				mat[i-1]=op;
				printf("\n");
				printf("\n");
				}
				printf("------------------------------------------");
				printf("\n*******************************************\n");
				printf("           RANKS OF STUDENTS               ");
				printf("\n*******************************************\n");
			for(i=1;i<=tot_stu;i++)
				{
				rank(tot_stu,mat,i);
				printf("\n");
				}


			/*for(i=0;i<tot;i++)
			{
			printf("\n%d",mat[i]);
			}*/
			}
		else
			{
			if(al=='s')
				{
				printf("\nenter no of students u want to check");
				scanf("%d",&freq);
				for(j=0;j<freq;j++)
					{
					printf("\n");
					printf("\nenter roll no:");
					scanf("%d",&roll);
				printf("\n*******************************************\n");
				printf("           MARKS OF STUDENT               ");
				printf("\n*******************************************\n");
					printf("\nmarks for student with roll:%d :-",roll);
					for(k=1;k<=tot_stu;k++)
						{
						op=checkerlist(k,no_of_ques,single_start,single_end,single_pmarks,single_nmarks,multiple_start,multiple_end,multiple_pmarks,multiple_nmarks,martix_start,martix_end,matrix_pmarks,matrix_nmarks,int_pmarks,int_nmarks,intq_start,intq_end,op);
						mat[k-1]=op;
						}
					op=checker(roll,no_of_ques,single_start,single_end,single_pmarks,single_nmarks,multiple_start,multiple_end,multiple_pmarks,multiple_nmarks,martix_start,martix_end,matrix_pmarks,matrix_nmarks,int_pmarks,int_nmarks,intq_start,intq_end,op);
					printf("\n*******************************************\n");
					printf("           RANK OF STUDENT               ");
					printf("\n*******************************************\n");
					rank(tot_stu,mat,roll);
					}
				}
			}
		}
	else
		{
		if(h=='s')
			{
			printf("\nenter your roll no:");
			scanf("%d",&roll);
			for(k=1;k<=tot_stu;k++)
				{
				op=checkerlist(k,no_of_ques,single_start,single_end,single_pmarks,single_nmarks,multiple_start,multiple_end,multiple_pmarks,multiple_nmarks,martix_start,martix_end,matrix_pmarks,matrix_nmarks,int_pmarks,int_nmarks,intq_start,intq_end,op);
				mat[k-1]=op;
				}
			printf("your  roll is %d=",roll);
				printf("\n*******************************************\n");
				printf("           MARKS OF STUDENT               ");
				printf("\n*******************************************\n");
					printf("\nmarks for student with roll:%d :-",roll);				
			op=checker(roll,no_of_ques,single_start,single_end,single_pmarks,single_nmarks,multiple_start,multiple_end,multiple_pmarks,multiple_nmarks,martix_start,martix_end,matrix_pmarks,matrix_nmarks,int_pmarks,int_nmarks,intq_start,intq_end,op);
				printf("\n*******************************************\n");
				printf("           RANK OF STUDENT               ");
				printf("\n*******************************************\n");
			rank(tot_stu,mat,roll);
			}
		}
	return 0;
}

int checker(int v,int no_of_ques,int single_start,int single_end,int single_pmarks,int single_nmarks,int multiple_start,int multiple_end,int multiple_pmarks,int multiple_nmarks,int martix_start,int martix_end,int matrix_pmarks,int matrix_nmarks,int int_pmarks,int int_nmarks,int intq_start,int intq_end,int op)
{
	FILE *Fp;
	int k[1];
	int i,j,rem,w=0,p=0;
	int key[no_of_ques][4];
	for(j=0;j<no_of_ques;j++)
		{
		for(i=0;i<4;i++)
			{
			key[j][i]=0;
			}
		}
    Fp=fopen ("key.txt", "r");
    int l=0;
	while(!feof(Fp))
		{
		int temp[4];
		for(i=0;i<4;i++)
			{
			temp[i]=0;
			}	
		fscanf(Fp,"%d",k);
		if(k[0]<10)
			{
			temp[k[0]-1]=1;
			}
		else
			{
			while(k[0])
				{
				rem=k[0]%10;
				temp[rem-1]=1;
				k[0]=k[0]/10;
				}
			}
		for(i=0;i<4;i++)
			{
			key[l][i]=temp[i];
			}
		l=l+1;
		}
	/*for(j=0;j<no_of_ques;j++)
		{
		for(i=0;i<4;i++)
			{
			printf("%d",key[j][i]);
			}
		printf("\n");
		}*/
    fclose(Fp);
	FILE *Fp1;
	int answer[no_of_ques][4];
	for(j=0;j<no_of_ques;j++)
		{
		for(i=0;i<4;i++)
			{
			answer[j][i]=0;
			}
		}
	char filename[100];
	sprintf(filename, "%d.txt",v);	
    Fp1=fopen (filename, "r");
    l=0;
	while(!feof(Fp1))
		{
		int temp[4];
		for(i=0;i<4;i++)
			{
			temp[i]=0;
			}	
		fscanf(Fp1,"%d",k);
		if(k[0]<10)
			{
			temp[k[0]-1]=1;
			}
		else
			{
			while(k[0])
				{
				rem=k[0]%10;
				temp[rem-1]=1;
				k[0]=k[0]/10;
				}
			}
		for(i=0;i<4;i++)
			{
			answer[l][i]=temp[i];
			}
		l=l+1;
		}
	/*for(j=0;j<no_of_ques;j++)
		{
		for(i=0;i<4;i++)
			{
			printf("%d",answer[j][i]);
			}
		printf("\n");
		}*/
    fclose(Fp1);
    int corr=0,wro=0,marks=0;
	for(i=0;i<single_end-single_start+1;i++)
		{    
		if((answer[i][0]==key[i][0])&&(answer[i][1]==key[i][1])&&(answer[i][2]==key[i][2])&&(answer[i][3]==key[i][3]))
			{
			marks=marks+single_pmarks;	
			p=0;
			w=0;
			}
		else
			{
			p=0;
			w=0;
			for(j=0;j<4;j++)
				{
				if((key[i][j]==0)&&(answer[i][j]==1))
					{
					w=w+1;
					}
				else
					{
					if(answer[i][j]==1)
						{
						p=p+1;
						}	
					}
				}
			}
		if(w>0)
			{
			marks=marks-single_nmarks;
			}
		else
			{
			if(p>0)
				{
				marks=marks+p;
				}
			}
		}
		char poiu;

	printf("\nsingle marks=%d",marks);
	
	
	corr=0;
	wro=0;
	int marks1=0,mic;
	for(i=multiple_start-1;i<multiple_end;i++)
		{    
		if((answer[i][0]==key[i][0])&&(answer[i][1]==key[i][1])&&(answer[i][2]==key[i][2])&&(answer[i][3]==key[i][3]))
			{
			marks1=marks1+multiple_pmarks;
			p=0;
			w=0;
			/*printf("%d",marks1);*/
			}
		else
			{
			p=0;
			w=0;
			for(j=0;j<4;j++)
				{
				if((key[i][j]==0)&&(answer[i][j]==1))
					{
					w=w+1;
					break;
					}
				else
					{
					if(answer[i][j]==1)
						{
						p=p+1;
						}	
					}
				}
			}
		if(w<=0)
			{
			marks1=marks1+p;
			}
		else
			{
			marks1=marks1-multiple_nmarks;

			}
		}
	printf("\nmultiple marks=%d",marks1);
	corr=0;
	wro=0;
	int marks3=0;
	for(i=martix_start-1;i<martix_end;i++)
		{    
		if((answer[i][0]==key[i][0])&&(answer[i][1]==key[i][1])&&(answer[i][2]==key[i][2])&&(answer[i][3]==key[i][3]))
			{
			marks3=marks3+matrix_pmarks;
			p=0;
			w=0;
			}
		else
			{
			p=0;
			w=0;
			for(j=0;j<4;j++)
				{
				if((key[i][j]==0)&&(answer[i][j]==1))
					{
					w=w+1;
					}
				else
					{
					if(answer[i][j]==1)
						{
						p=p+1;
						}	
					}
				}
			}
			if(w>0)
				{
				marks3=marks3-matrix_nmarks;
				}
			else
				{
				marks3=marks3+p;
				}
		}
	printf("\nmatrix matching marks=%d",marks3);
	FILE *Fp3;	
    Fp3=fopen ("key.txt", "r");
	int key1[no_of_ques];
	for(i=0;i<no_of_ques;i++)
		{
		key1[i]=0;
		}
    l=0;
	while(l<no_of_ques)
		{
		fscanf(Fp3,"%d",k);
		key1[l]=k[0];
		l=l+1;
		}
	/*for(i=0;i<intq_end-intq_start+1;i++)
		{
		printf("%d",key1[i]);
		printf("\n");
		}*/
    fclose(Fp3);
	FILE *Fp4;
	int answer1[no_of_ques];
	for(i=0;i<no_of_ques;i++)
		{
		answer1[i]=0;
		}
	sprintf(filename, "%d.txt",v);	
    Fp4=fopen (filename, "r");
    l=0;
	while(l<no_of_ques)
		{	
		fscanf(Fp4,"%d",k);
		answer1[l]=k[0];
		l=l+1;
		}
	/*for(j=0;j<no_of_ques;j++)
		{
		printf("%d",answer1[j]);
		printf("\n");
		}*/
    fclose(Fp4);
    int corr2=0,wro2=0,marks2;
	for(j=intq_start-1;j<no_of_ques;j++)
		{
		if((answer1[j]==key1[j])&&(answer1[j]!=0))
			{
			corr2=corr2+1;
			} 
		else
			{
			if(answer1[j]!=0)
				{
				wro2=wro2+1;
				}
			}
		}
	marks2=(corr2*int_pmarks)-(wro2*int_nmarks);
	printf("\nintegers marks=%d",marks2);
	int le[4],tt;
	le[0]=marks;
	le[1]=marks1;
	le[2]=marks2;	
	le[3]=marks3;
	/*for(i=0;i<=3;i++)
		{
		printf("%d",le[i]);
		}*/
	for(i=0;i<3;i++)
		{
		if(le[i]<le[i+1])
			{
			tt=le[i];
			le[i]=le[i+1];
			le[i+1]=tt;
			}
		}
	if(le[3]==marks)
		{
		printf("\nhe is weak in single");
		}
	if(le[3]==marks2)
		{
		printf("\nhe is weak in integers");
		}
	if(le[3]==marks3)
		{
		printf("\nhe is weak in matrix");
		}
	if(le[3]==marks1)
		{
		printf("\nhe is weak in multiple");
		}
	printf("\ntotal marks=%d",marks+marks1+marks2+marks3);
	op=marks+marks1+marks2+marks3;
	return op;
}

void rank(int tot_stu,int mat[],int k)
{
	int ra[tot_stu],tem,i,j,p;
	for(i=0;i<tot_stu;i++)
		{
		ra[i]=mat[i];
		}
	for(i=0;i<tot_stu-1;i++)
		{
		for(j=tot_stu-1;j>i;j--)
			{
			if(ra[j-1]<ra[j])
				{
				tem=ra[j-1];
				ra[j-1]=ra[j];
				ra[j]=tem;
				}
			}
		}
	/*for(i=0;i<tot;i++)
		{
		printf("\n%d",ra[i]);
		}*/
	for(i=0;i<tot_stu;i++)
		{
		if(mat[k-1]==ra[i])
			{
			printf("\nrank of %d=%d",k,i+1);
			break;
	 		}
		}
}

int checkerlist(int v,int no_of_ques,int single_start,int single_end,int single_pmarks,int single_nmarks,int multiple_start,int multiple_end,int multiple_pmarks,int multiple_nmarks,int martix_start,int martix_end,int matrix_pmarks,int matrix_nmarks,int int_pmarks,int int_nmarks,int intq_start,int intq_end,int op)
{
	FILE *Fp;
	int k[1];
	int i,j,rem,w=0,p=0;
	int key[no_of_ques][4];
	for(j=0;j<no_of_ques;j++)
		{
		for(i=0;i<4;i++)
			{
			key[j][i]=0;
			}
		}
    Fp=fopen ("key.txt", "r");
    int l=0;
	while(!feof(Fp))
		{
		int temp[4];
		for(i=0;i<4;i++)
			{
			temp[i]=0;
			}	
		fscanf(Fp,"%d",k);
		if(k[0]<10)
			{
			temp[k[0]-1]=1;
			}
		else
			{
			while(k[0])
				{
				rem=k[0]%10;
				temp[rem-1]=1;
				k[0]=k[0]/10;
				}
			}
		for(i=0;i<4;i++)
			{
			key[l][i]=temp[i];
			}
		l=l+1;
		}
	/*for(j=0;j<no_of_ques;j++)
		{
		for(i=0;i<4;i++)
			{
			printf("%d",key[j][i]);
			}	
		printf("\n");
		}*/
    fclose(Fp);
    FILE *Fp1;
	int answer[no_of_ques][4];
	for(j=0;j<no_of_ques;j++)
		{
		for(i=0;i<4;i++)
			{
			answer[j][i]=0;
			}
		}
	char filename[100];
	sprintf(filename, "%d.txt",v);	
    Fp1=fopen (filename, "r");
    l=0;
	while(!feof(Fp1))
		{
		int temp[4];
		for(i=0;i<4;i++)
			{
			temp[i]=0;
			}	
		fscanf(Fp1,"%d",k);
		if(k[0]<10)
			{
			temp[k[0]-1]=1;
			}
		else
			{
			while(k[0])
				{
				rem=k[0]%10;
				temp[rem-1]=1;
				k[0]=k[0]/10;
				}
			}
		for(i=0;i<4;i++)
			{
			answer[l][i]=temp[i];
			}
		l=l+1;
		}
	/*for(j=0;j<no_of_ques;j++)
		{
		for(i=0;i<4;i++)
			{
			printf("%d",answer[j][i]);
			}
		printf("\n");
		}*/
    fclose(Fp1);
    int corr=0,wro=0,marks=0;
	for(i=0;i<single_end-single_start+1;i++)
		{    
		if((answer[i][0]==key[i][0])&&(answer[i][1]==key[i][1])&&(answer[i][2]==key[i][2])&&(answer[i][3]==key[i][3]))
			{
			marks=marks+single_pmarks;
			p=0;
			w=0;
			}
		else
			{
			p=0;
			w=0;
			for(j=0;j<4;j++)
				{
				if((key[i][j]==0)&&(answer[i][j]==1))
					{
					w=w+1;
					}
				else
					{
					if(answer[i][j]==1)
						{
						p=p+1;
						}		
					}
				}
			}
		if(w>0)
			{
			marks=marks-single_nmarks;
			}
		else
			{
			marks=marks+p;
			}
		}
	/*printf("\nsingle marks=%d",marks);*/
	corr=0;
	wro=0;
	int marks1=0,mic;
	for(i=multiple_start-1;i<multiple_end;i++)
		{    
		if((answer[i][0]==key[i][0])&&(answer[i][1]==key[i][1])&&(answer[i][2]==key[i][2])&&(answer[i][3]==key[i][3]))
			{
			marks1=marks1+multiple_pmarks;
			p=0;
			w=0;
			/*printf("%d",marks1);*/
			}
		else
			{
			p=0;
			w=0;
			for(j=0;j<4;j++)
				{
				if((key[i][j]==0)&&(answer[i][j]==1))
					{
					w=w+1;
					break;
					}
				else
					{
					if(answer[i][j]==1)
						{
						p=p+1;
						}	
					}
				}
			}
		if(w<=0)
			{
			marks1=marks1+p;
			}
		else
			{
			marks1=marks1-multiple_nmarks;
			}
		}
	/*printf("\nmultiple marks=%d",marks1);*/
	corr=0;
	wro=0;
	int marks3=0;
	for(i=martix_start-1;i<martix_end;i++)
		{    
		if((answer[i][0]==key[i][0])&&(answer[i][1]==key[i][1])&&(answer[i][2]==key[i][2])&&(answer[i][3]==key[i][3]))
			{
			marks3=marks3+matrix_pmarks;
			p=0;
			w=0;
			}
		else
			{
			p=0;
			w=0;
			for(j=0;j<4;j++)
				{
				if((key[i][j]==0)&&(answer[i][j]==1))
					{
					w=w+1;
					}
				else
					{
					if(answer[i][j]==1)
						{
						p=p+1;
						}	
					}
				}
			}
		if(w>0)
			{
			marks3=marks3-matrix_nmarks;
			}
		else
			{
			marks3=marks3+p;
			}
		}
	/*printf("\nmatrix matching marks=%d",marks3);*/
	FILE *Fp3;
    Fp3=fopen ("key.txt", "r");
	int key1[no_of_ques];
	for(i=0;i<no_of_ques;i++)
		{
		key1[i]=0;
		}
    l=0;
	while(l<no_of_ques)
		{
		fscanf(Fp3,"%d",k);
		key1[l]=k[0];
		l=l+1;
		}
	/*for(i=0;i<intq_end-intq_start+1;i++)
		{
		printf("%d",key1[i]);
		printf("\n");
		}*/
    fclose(Fp3);
	FILE *Fp4;
	int answer1[no_of_ques];
	for(i=0;i<no_of_ques;i++)
		{
		answer1[i]=0;
		}
	sprintf(filename, "%d.txt",v);	
    Fp4=fopen (filename, "r");
    l=0;
	while(l<no_of_ques)
		{	
		fscanf(Fp4,"%d",k);
		answer1[l]=k[0];
		l=l+1;
		}
	/*for(j=0;j<no_of_ques;j++)
		{
		printf("%d",answer1[j]);
		printf("\n");
		}*/
    fclose(Fp4);
    int corr2=0,wro2=0,marks2;
	for(j=intq_start-1;j<no_of_ques;j++)
		{
		if((answer1[j]==key1[j])&&(answer1[j]!=0))
			{
			corr2=corr2+1;
			} 
		else
			{
			if(answer1[j]!=0)
			
				{
				wro2=wro2+1;
				}
			}
		}
	marks2=(corr2*int_pmarks)-(wro2*int_nmarks);
	/*printf("\nintegers marks=%d",marks2);
	printf("\ntotal marks=%d",marks+marks1+marks2+marks3);*/
	op=marks+marks1+marks2+marks3;
	return op;
}




