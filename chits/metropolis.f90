!Assigment 4-Question 3
!Name:Chitrakshee
!PRN:21021093
!Program: To find the value of integral using Metropolis algorithm

program metropolis
  implicit none
  
  real :: del,dx,x0,xtest,w,r,s,f,x,x1,summ
  integer::i,j,m,n
  
  x0=0.0     !initial value
  del=0.3    !increment in steps
  n=110000    
  m=10000
  summ=0.0
  open(1, file="metro_input.txt")
  
  do i=1,n
     call random_number(r)
     dx=del*(2*r-1)
     xtest=x0+dx
     w=f(xtest)/f(x0)
     
     if(w>=1.0) then
        x1=xtest
     else 
        call random_number(r)
        if (r<w) then
           x1=xtest
        else
           x1=x0
        end if
     end if
     
     if(i>m) then        !Equillibrium condition
        write(1,*) x1       !loop for generating points only for the given range 
        summ = summ + exp(-x1**2.0)*(1 - exp(-1.0))/exp(-x1)
     end if
     x0=x1
         
  end do
  write(*,*) summ/n     
end program metropolis

function f(x)           !define the fucntion regarding the limits
  implicit none
  real::x,f
  if (x >= 0 .and. x<= 1) then 
     f = exp(-x)/(1 - exp(-1.0))     !normalised function
  else 
     f = 0
  end if
end function f  
