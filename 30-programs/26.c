                        // Program to sort an array of integers using bubble sort
                        # include <stdio.h>

                        int main()  {

                            int a[10] = {34, 12, 5, 66, 23, 1, 89, 45, 78, 10};
                            int sort(int *);
                            int i;
                            sort(a);
                            for(i=0; i<10; i++)
                            printf("\t %d", a[i]);

                        }
                        int sort(int * a)
                        {
                            int i,j,z;
                            for(i=0; i<10; i++)
                            {
                                for(j=0; j<9; j++)
                                {
                                    if(*(a+j)>*(a+j+1))
                                    {
                                        z = *(a+j);
                                        *(a+j) = *(a+j+1);
                                        *(a+j+1) = z;
                                    }


                                }
                            }

                        }