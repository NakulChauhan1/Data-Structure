
#include<stdio.h>
struct row
{
    int at; int bt;
    int p;
    int ct; int tat;
    int wt; int rt;
};


void pushtoQ1(int *Q1,int pid)
{
    int j=0;
    for(int i=0; Q1[i]!=0 ; i++)
    {
        j = i;
    }
    Q1[j] = pid;
}

void pushtoQ2(int *Q2, int pid)
{
    int j=0;
    for(int i=0; Q2[i]!=0 ; i++)
    {
        j = i;
    }
    Q2[j] = pid;
}

int averageTAT(struct row * Table)
{
    int sum=0 , avg;
    for(int i=0;i<10;i++)
        sum += Table[3].tat;
    avg = sum/10;
    return avg;
}

int averageWT(struct row * Table)
{
    int sum=0 , avg;
    for(int i=0;i<10;i++)
        sum += Table[4].wt;
    avg = sum/10;
    return avg;
}

int main()
{
      int N;
      printf("Number of Processes: ");
      scanf("%d", &N);
      struct row Table[N+1];
      int WT = 0, TAT = 0, pos, z;
      int p[10], prio[10], AT[10], BT[10], temp[10], b;
      float average_wait_time, average_turnaround_time;
      int c = 0, time_quantum = 2,j;
      int i, total = 0, x;


      x = N;
      for(i = 0; i < N; i++)
      {
        p[i]=i+1;
        prio[i]=0;
        printf("\nEnter AT, BT and Priority of Process[%d]\n", i + 1);
        scanf("%d", &AT[i]);
        scanf("%d", &BT[i]);
        temp[i] = BT[i];
      }

      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t\t Waiting Time\t\t\n");
      for(total = 0, i = 0; x != 0;)
      {
        for(z=0;z<N;z++)
        {
            int temp1;
            pos=z;
            for(j=z+1;j<N;j++)
            {
                if(prio[j]<prio[pos])
                pos=j;
            }
            temp1=prio[z];
            prio[z]=prio[pos];
            prio[pos]=temp1;
            temp1=BT[z];
            BT[z]=BT[pos];
            BT[pos]=temp1;
            temp1=AT[z];
            AT[z]=AT[pos];
            AT[pos]=temp1;
            temp1=p[z];
            p[z]=p[pos];
            p[pos]=temp1;
            temp1=temp[z];
            temp[z]=temp[pos];
            temp[pos]=temp1;
        }

            if(temp[i] <= time_quantum && temp[i] > 0)
            {
                  total = total + temp[i];
                  temp[i] = 0;
                  c = 1;
            }

            else if(temp[i] > 0)
            {
                  temp[i] = temp[i] - time_quantum;
                  total = total + time_quantum;
            }

        for(b=0;b<N;b++)
        {
            if(b==i)
                prio[b]+=1;
            else
                prio[b]+=2;
        }

        if(temp[i] == 0 && c == 1)
        {
            x--;
            printf("\nProcess[%d]\t\t%d\t\t\t %d\t\t\t\t %d     \t\t", p[i], BT[i], total - AT[i], total - AT[i] - BT[i]);
            WT = WT + total - AT[i] - BT[i];
            TAT = TAT + total - AT[i];
            c = 0;
        }
            if(i == N - 1)
            {
                i = 0;
            }
            else if(AT[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
    return 0;
}
