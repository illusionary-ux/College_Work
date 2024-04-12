document.addEventListener('DOMContentLoaded', function() {
    let currentIndex = 0; // 当前显示的图片索引
    const items = document.querySelectorAll('.carousel-item');
    const itemCount = items.length; // 轮播图项的总数

    // 初始化，只显示第一张图片
    function initCarousel() {
        items.forEach((item, index) => {
            item.style.display = index === 0 ? "block" : "none";
        });
    }

    // 切换到下一张图片
    function nextItem() {
        items[currentIndex].style.display = "none"; // 隐藏当前图片
        currentIndex = (currentIndex + 1) % itemCount; // 计算下一张图片的索引
        items[currentIndex].style.display = "block"; // 显示下一张图片
    }

    // 自动轮播
    function startCarousel() {
        setInterval(nextItem, 3000); // 每3秒切换一次图片
    }

    initCarousel(); // 初始化轮播图
    startCarousel(); // 开始自动轮播
});
