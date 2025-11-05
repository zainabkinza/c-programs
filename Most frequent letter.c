#include<stdio.h>
int main()
{
	
	char name[100], course1[100], course2[100], i,j;
	printf("Enter your full name: ");
	scanf("%[^\n]s", name);
	printf("Enter your first course: ");
	scanf(" %[^\n]s", course1);
	printf("Enter your second course: ");
	scanf(" %[^\n]s", course2);
	
	for(int i=0; name[i]!='\0'; i++){
		if(name[i]>='A' && name[i]<='Z'){
			name[i]= name[i]+ 32;
		}
	}
	int maxchar = 0;
	int maxfreq = 0;
	for(int i=1; name[i]!='\0'; i++){
	int count=0;
    for(int j=0; name[j]!='0'; j++){
    	if(name[i]== name[j]){
    		count++;
		}
	if(count>maxfreq){
		maxfreq = count;
		maxchar = name[i];
	}
	}
	}
	printf("Most frequent letter in your name is: %c\n", maxchar);
	printf("Maximum frequency of %c= %d\n", maxchar, maxfreq);
	
	for(int i=1; course1[i]!='\0'; i++){
	int count=0;
    for(int j=0; course1[j]!='0'; j++){
    	if(course1[i]== course1[j]){
    		count++;
		}
	if(count>maxfreq){
		maxfreq = count;
		maxchar = course1[i];
	}
	}
	}
	printf("Most frequent letter in your course 1 is: %c\n", maxchar);
	printf("Maximum frequency of %c= %d\n", maxchar, maxfreq);
	
	for(int i=1; course2[i]!='\0'; i++){
	int count=0;
    for(int j=0; course2[j]!='0'; j++){
    	if(course2[i]== course2[j]){
    		count++;
		}
	if(count>maxfreq){
		maxfreq = count;
		maxchar = course2[i];
	}
	}
	}
	printf("Most frequent letter in your course 2 is: %c\n", maxchar);
	printf("Maximum frequency of %c= %d\n", maxchar, maxfreq);
	

return 0;	
	
}