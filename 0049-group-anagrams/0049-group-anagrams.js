/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    
    let groups = {};
    
    for (let word of strs) {
        
        let sortedWord = word.split('').sort().join('');
        
        if (groups[sortedWord]) {
            groups[sortedWord].push(word);
        }
        else {
            groups[sortedWord] = [word];
        }
    }
    
    let ans = [];
    
    for (let arr of Object.values(groups)) {
        ans.push(arr);
    }
    
    return ans;
};