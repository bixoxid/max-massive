    #include <stdio.h>
     
    int main()
    {
      int array[100], maximum, size, c;
     
      printf("Напиши сколько элементов в массиве\n");
      scanf("%d", &size);
     
      printf("напиши %d целочисленных значения!!важно напиши именно целочисленные \n", size);
    
      for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
     
      maximum = array[0];
     
      for (c = 1; c < size; c++)
      {
        if (array[c] > maximum)
        {
           maximum  = array[c];
           
        }
      }
     
      printf("из всего этого %d самое большое .\n",maximum);
      return 0;
    }
