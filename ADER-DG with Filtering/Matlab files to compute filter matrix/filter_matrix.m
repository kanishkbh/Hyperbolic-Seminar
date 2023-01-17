function VFV = filter_matrix()
    N=3;
    filterdiag = ones(N+1,1);
    alpha = 36;
    s=14 % filter order
    
    for i=0:N
        filterdiag(i+1) = exp(-alpha*(i/N)^s);
    end

    F = diag(filterdiag);
    V = vandermonde();
    Vinv = inv(V);
    VFV = V*F*Vinv
end
