/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  16/10/23
  Purpose       :  Task 9_12 to get know about the loops
                   and print the factorial  of given number using for loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void star(int);
            void main()
            {
            int a=50;
            star(a);
            printf("Date\t\tNo\tSubject\n");
            star(a);
            printf("November,\t1\tVector and complex analysis\nNovember,\t2\tEngineering Dynamics\nNovember,\t3\tDigital logic design\nNovember,\t4\tComputer Programing-I\nNovember,\t5\tTranslation of Hly Quran-II\nNovember,\t6\tElectrical Machinery\n");
            star(a+5);
            }
    void star(int q)
    {
        for (int i = 0; i < q; i++)
        {
            printf("*");
        }
        printf("\n");
    }