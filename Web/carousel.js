document.addEventListener('DOMContentLoaded', () => {
    // 初始化变量
    let currentIndex = 0; // 当前显示项的索引
    const items = document.querySelectorAll('.carousel-item'); // 获取所有轮播项
    const itemCount = items.length; // 轮播项的数量
    let loadedCount = 0; // 已加载完成的图片数量

    // 检查所有图片是否加载完成
    items.forEach(item => {
        const img = item.querySelector('img');
        if (img.complete) {
            loadedCount++; // 如果图片已加载完成，则增加已加载完成的数量
        } else {
            // 图片未加载完成时，设置加载完成的回调函数
            img.onload = () => {
                loadedCount++; // 图片加载完成后增加已加载完成的数量
                // 如果所有图片都已加载完成，则初始化轮播并启动
                if (loadedCount === itemCount) {
                    initCarousel(); // 初始化轮播
                    startCarousel(); // 启动轮播
                }
            };
        }
    });

    // 如果所有图片在代码执行时已经加载完成，直接初始化轮播并启动
    if (loadedCount === itemCount) {
        initCarousel(); // 初始化轮播
        startCarousel(); // 启动轮播
    }

    // 初始化轮播
    function initCarousel() {
        items.forEach((item, index) => {
            // 设置轮播项的初始透明度和过渡效果
            item.style.opacity = index === 0 ? '1' : '0';
            item.style.transition = 'opacity 0.5s ease-in-out';
        });
    }

    // 切换至下一项
    function nextItem() {
        items[currentIndex].style.opacity = '0'; // 隐藏当前项
        currentIndex = (currentIndex + 1) % itemCount; // 计算下一项的索引
        items[currentIndex].style.opacity = '1'; // 显示下一项
    }

    // 启动轮播
    function startCarousel() {
        setInterval(nextItem, 3000); // 每隔3秒切换至下一项
    }
});
