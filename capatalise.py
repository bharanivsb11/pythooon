ch=raw_input()
n=len(ch)
for i in range(0,n):
  if(i==0):
    ch[0]=(ch[0].upper())
  if(ch[i]==' '):
    ch[i+1]=(ch[i+1].upper())
print ch    
