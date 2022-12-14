#include <stdio.h>
 
#define MAX 805
#define UNRE '*'
#define UNEX '.'
#define EX 'X'
 
char G [MAX*MAX];
int D [MAX*MAX];
int parent[MAX*MAX];
int mB, mE, mL = -1;
 
void doit(int N, int start)
{
int s = start, s_fils, pos[4], d = 0, nn = 0, i, f;
 
do
{
G[s] = EX;
D[s] = d;
f = 0;
/* ptet un autre ordre ? */
pos[0] = s+1; pos[1] = s+(N+2); pos[2] = s-1; pos[3] = s-(N+2);
for (i = 0; i < 4; i++)
{
s_fils = pos[i];
if (G[s_fils] == UNRE) continue;
else if (G[s_fils] == UNEX)
{
parent[s_fils] = s;
s = s_fils;
d++;
f = 1;
break;
}
else if (G[s_fils] == EX)
{
nn = D[s] - D[s_fils];
if (mL < nn)
{
mB = s;
mE = s_fils;
mL = nn;
}
}
}
if (f == 0) { s = parent[s]; d--; }
}
while (s != start);
}
 
int main()
{
register int r, c; int N; int libre = 0, s;
 
scanf("%d\n", &N);
for (r = 1; r <= N; r++)
{
for (c = 1; c <= N; c++)
{
scanf("%c", &G[r*(N+2)+c]);
if (!libre && G[r*(N+2)+c] == UNEX) libre = r*(N+2)+c;
}
getchar();
}
doit(N, libre);
 
#ifdef MYDEBUG
for (r = 1; r <= N; r++)
for (c = 1; c <= N; c++)
if (G[r*(N+2)+c] == EX)
G[r*(N+2)+c] = UNEX;
#endif
 
fprintf(stdout, "%d\n", mL + 1);
fprintf(stdout, "%d %d\n", mE / (N+2) - 1, mE % (N+2) - 1);
#ifdef MYDEBUG
G[mE] = EX;
#endif
s = mB;
do
{
#ifdef MYDEBUG
if (G[s] == EX) { fprintf(stderr, "ERROR !\n"); exit(1); } else G[s] = EX;
#endif
fprintf(stdout, "%d %d\n", s / (N+2) - 1, s % (N+2) - 1);
s = parent[s];
}
while (s != mE);
 
#ifdef MYDEBUG
for (r = 1; r <= N; r++)
{
for (c = 1; c <= N; c++)
fprintf(stderr, "%c", G[r*(N+2)+c]);
fprintf(stderr, "\n");
}
#endif
 
return 0;
}
 
