var
 i,v,k,n,m:longint;
 f:array[0..200]of longint;
 w,c:array[0..30]of longint;
begin
  fillchar(f,sizeof(f),0);
  readln(m,n);                //��������m����Ʒ����n
  f[0]:=0;
  for i:=1 to n do
    readln(w[i],c[i]);         //ÿ����Ʒ�������ͼ�ֵ
  for i:=1 to n do   //�� f(v)��ʾ����������v���������ֵ
    for v:=w[i] to m do
     if f[v-w[i]]+c[i]>f[v] then f[v]:=f[v-w[i]]+c[i];
  writeln('max=',f[m]);
end.