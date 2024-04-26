document.addEventListener('DOMContentLoaded', () => {
    let currentIndex = 0;
    const items = document.querySelectorAll('.carousel-item');
    const itemCount = items.length;
    let loadedCount = 0;

    // 检查所有图片是否加载完成
    items.forEach(item => {
        const img = item.querySelector('img');
        if (img.complete) {
            loadedCount++;
        } else {
            img.onload = () => {
                loadedCount++;
                if (loadedCount === itemCount) {
                    initCarousel();
                    startCarousel();
                }
            };
        }
    });

    // 如果所有图片在代码执行时已经加载，直接启动轮播
    if (loadedCount === itemCount) {
        initCarousel();
        startCarousel();
    }

    function initCarousel() {
        items.forEach((item, index) => {
            item.style.opacity = index === 0 ? '1' : '0';
            item.style.transition = 'opacity 0.5s ease-in-out';
        });
    }

    function nextItem() {
        items[currentIndex].style.opacity = '0';
        currentIndex = (currentIndex + 1) % itemCount;
        items[currentIndex].style.opacity = '1';
    }

    function startCarousel() {
        setInterval(nextItem, 3000);
    }
});
