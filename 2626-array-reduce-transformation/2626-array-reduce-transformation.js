/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let val = init;
    nums.forEach((num)=>{
        if(nums.length === 0)
            return init;
        else
        {
            val = fn(val, num);        
        }
    })
    return val;
};