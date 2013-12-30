import sys
import math
t=int(raw_input())
while(t>0):
    pa=float(raw_input())
    pa=math.sqrt(8*pa+1)-1;
    pa=math.ceil(pa/2);
    print pa+1
    t=t-1
