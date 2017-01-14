program main
    integer(kind=2) num
    integer n
    n=1
    do while(n<20)
        num = n*(n+2)
        if(num==323) write(*,*) n,n+2
        n=n+2
    enddo
end program main
