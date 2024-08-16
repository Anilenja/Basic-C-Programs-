//123 + 345
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    char s1[] = "567";
//    char s2[] = "234";
//    int num1 = atoi(s1);
//    int num2 = atoi(s2);
//    int sum = num1 + num2;
//    printf("%d", sum);
//
//    return 0;
//}
//abc+(24)978
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    char s1[] = "abc";
//    char s2[] = "978";
//    int sum=0;
//    char r[10];
//	for(int i=0;s2[i]!='\0';i++)
//    sum+=s2[i]-48;
//    strcat(s1,itoa(sum,r,10));
//    puts(s1);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int arr1[]={1,2,3,4,5,6},arr2[]={1,2,3,4,5,6};
//	int r[13]={0};
//	int i,j,s,k=0;
//	for(i=0;i<6;i++)
//	{
//		for(j=0;j<6;j++)
//		{
//			s=arr1[i]+arr2[j];
//			r[s]++;
//		}
//	}
//	for(i=0;i<13;i++)
//	printf("%d ",r[i]);
//	
//		
//	return 0;
//}

//Time t1={1,58,42};
//Time t2={2,1,45};
//absolute time differance b/w above 2 times in seconds 
	
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Time
//{
//    int h;
//    int m;
//    int s;
//};
//
//int timeToSeconds(struct Time t) {
//    return t.h * 3600 + t.m * 60 + t.s;
//}
//
//int absoluteTimeDifference(struct Time t1, struct Time t2) {
//    int seconds1 = timeToSeconds(t1);
//    int seconds2 = timeToSeconds(t2);
//
//    return abs(seconds1 - seconds2);
//}
//
//int main() {
//    struct Time t1 = {1, 58, 42};
//    struct Time t2 = {2, 1, 45};
//
//    int diffSeconds = absoluteTimeDifference(t1, t2);
//
//    printf("Absolute time difference: %d seconds\n", diffSeconds);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Time
//{
//    int h;
//    int m;
//    int s;
//};
//
//int timeToSeconds(struct Time t) {
//    return t.h * 3600 + t.m * 60 + t.s;
//}
//
//int absoluteTimeDifference(struct Time t1, struct Time t2) {
//    int seconds1 = timeToSeconds(t1);
//    int seconds2 = timeToSeconds(t2);
//
//    return abs(seconds1 - seconds2);
//}
//
//int main() {
//    struct Time t1, t2;
//
//    // Input for t1
//    printf("Enter time for t1 (hours minutes seconds): ");
//    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);
//
//    // Input for t2
//    printf("Enter time for t2 (hours minutes seconds): ");
//    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);
//
//    int diffSeconds = absoluteTimeDifference(t1, t2);
//
//    printf("Absolute time difference: %d seconds\n", diffSeconds);
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define ms 10
//
//int top = -1, ele, stack[ms];
//
//void push();
//void pop();
//void callMax();
//void callMin();
//
//int main() {
//    int n;
//    char op[10];
//    scanf("%d", &n);
//    while (n--) {
//        fgets(op, sizeof(op), stdin);
//        if (strcmp(op, "Add\n") == 0)
//            push();
//        else if (strcmp(op, "Remove\n") == 0)
//            pop();
//        else if (strcmp(op, "CallMax\n") == 0)
//            callMax();
//        else if (strcmp(op, "CallMin\n") == 0)
//            callMin();
//    }
//    return 0;
//}
//
//void push() {
//    top += 1;
//    scanf("%d", &ele);
//    stack[top] = ele;
//}
//
//void pop() {
//    if (top == -1)
//        printf("Invalid\n");
//    else {
//        top -= 1;
//    }
//}
//
//void callMax() {
//    int max, i;
//    if (top == -1)
//        printf("Invalid\n");
//    else {
//        max = stack[0];
//        for (i = 1; i <= top; i++) {
//            if (stack[i] > max) {
//                max = stack[i];
//            }
//        }
//        printf("Max: %d\n", max);
//    }
//}
//
//void callMin() {
//    int min, i;
//    if (top == -1)
//        printf("Invalid\n");
//    else {
//        min = stack[0];
//        for (i = 1; i <= top; i++) {
//            if (stack[i] < min) {
//                min = stack[i];
//            }
//        }
//        printf("Min: %d\n", min);
//    }
//}


#define ms 10
int f=-1,r=-1,queue[ms],ele;
int main()
{
	int ch;
	scanf("%d",&ch)
}
