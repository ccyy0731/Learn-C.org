   #include <stdio.h>
   int sum (int num) {
       static int count = 0;
       count = count + num;
       return count;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }
