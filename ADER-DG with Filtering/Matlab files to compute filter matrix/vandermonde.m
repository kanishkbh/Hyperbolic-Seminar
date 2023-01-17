function V = vandermonde()
    
    x0 = 0.06943184420297371238802675555359524745213731018514118119213903955;
    x1 = 0.3300094782075718675986671204483776563997120651145428237035230116;
    x2 =  0.6699905217924281324013328795516223436002879348854571762964769884;
    x3 = 0.9305681557970262876119732444464047525478626898148588188078609605;
    
    [p00, p10, p20, p30] = mypoly(x0);
    [p01, p11, p21, p31] = mypoly(x1);
    [p02, p12, p22, p32] = mypoly(x2);
    [p03, p13, p23, p33] = mypoly(x3);
    
    V = [p00, p10, p20, p30; p01, p11, p21, p31; p02, p12, p22, p32; p03, p13, p23, p33];
    
    %Vinv = inv(V)
end
