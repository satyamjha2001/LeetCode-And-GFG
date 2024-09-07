/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let newArray = [];
    arr.forEach((values, index)=>{
        if(fn(values, index))
            newArray.push(values);
    })
    return newArray;
};