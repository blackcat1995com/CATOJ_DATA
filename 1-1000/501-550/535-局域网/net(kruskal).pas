var
    x, j, tot, i, n,k,sum : longint;
    l, a, b : array[1 .. 10000] of longint;
    f : array[1 .. 100] of longint;
    v : array[1 .. 100, 1 .. 100] of boolean;
procedure qsort(ll, rr : longint);
var
    i, j, mid, temp : longint;
begin
    i := ll; j := rr; mid := l[(i + j) shr 1];
    repeat
        while l[i] < mid do inc(i);
        while l[j] > mid do dec(j);
        if i <= j then begin
            temp := l[i]; l[i] := l[j]; l[j] := temp;
            temp := a[i]; a[i] := a[j]; a[j] := temp;
            temp := b[i]; b[i] := b[j]; b[j] := temp;
            inc(i); dec(j);
        end;
    until i > j;
    if i < rr then qsort(i, rr);
    if ll < j then qsort(ll, j);
end;

function find(x : longint) : longint;
begin
    if f[x] = x then exit(x)
    else exit(find(f[x]));
end;

procedure union(u, v : longint);
var
    fu, fv : longint;
begin
    fu := find(u);
    fv := find(v);
    f[fv] := fu;
end;
procedure kruskal;
var
    cnt, i, ans : longint;
begin
    for i := 1 to n do f[i] := i;
    cnt := 0;
    ans := 0;
    for i := 1 to tot do
      if (find(a[i]) <> find(b[i])) then 
        begin
          union(a[i], b[i]);
          ans := ans + l[i];
          inc(cnt);
          if cnt = n - 1 then break;
        end;
    writeln(sum-ans);
end;
begin
    assign(input,'net.in'); reset(input);
    assign(output,'net.out'); rewrite(output);
    fillchar(v, sizeof(v), 0);

    readln(n,tot);
    sum := 0;
    for k := 1 to tot do
    begin
      readln(i,j,x);
      a[k] := i;
      b[k] := j;
      l[k] := x;
      sum := sum + x;
      v[i,j] := true;
      v[j,i] := true;
    end;

    qsort(1, tot);

    kruskal;
    close(input); close(output);
end.
