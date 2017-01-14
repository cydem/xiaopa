program main
    integer(kind=2) year
    year=1951

    do while(year<2021)
        if(mod(year,100)==0)then
            if(mod(year,400)==0)then
                  write(*,*) year
            end if
        else
            if(mod(year,4)==0)then
                  write(*,*) year
            end if
        end if
        year = year+1
    enddo
end program main
