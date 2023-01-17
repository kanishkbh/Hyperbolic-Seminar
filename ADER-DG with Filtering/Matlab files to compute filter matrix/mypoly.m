function [p0, p1, p2, p3] = mypoly(x)
    p0 = 1;
    p1 = 3*(2*x-1);
    p2 = 5*(6*x*x - 6*x + 1);
    p3 = 7*(20*x*x*x - 30*x*x + 12*x -1);
end