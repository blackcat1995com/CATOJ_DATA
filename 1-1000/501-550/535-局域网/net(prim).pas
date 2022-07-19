program badman;
var n,k,i,j,x,y,v,u,tot,min,tott:longint;
    w:array[1..1000,1..1000]of longint;
    dis:array[1..1000]of longint;
    bo:array[1..1000]of boolean;
begin
 assign(input,'net.in');reset(input);
 assign(output,'net.out');rewrite(output);
 readln(n,k);
 fillchar(w,sizeof(w),$7f div 3);
 tott:=0;
 for i:=1 to k do
  begin
    read(x,y,w[x,y]);
    tott:=tott+w[x,y];
    if w[x,y]=0 then w[x,y]:=maxlongint;
    w[y,x]:=w[x,y];
  end;
 fillchar(bo,sizeof(bo),true);
 fillchar(dis,sizeof(dis),$7f div 3);
 dis[1]:=0;
 tot:=0;
 for j:=1 to n do
 begin
   min:=maxlongint;
   for i:=1 to n do
   if (bo[i])and(dis[i]<min) then
    begin
      min:=dis[i];
      u:=i;
    end;
   bo[u]:=false;
   tot:=tot+dis[u];
   for v:=1 to n do
     if (bo[v]=true)and(w[v,u]<dis[v]) then
       dis[v]:=w[v,u];
 end;
 writeln(tott-tot);
 close(input);close(output);
end.
