/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    
    let maxm = 0;
    
    for (let ch of n.split('')) {
        
        let num = parseInt(ch,10);
        
        if (num>maxm) maxm = num;
    }
    
    return maxm;
};