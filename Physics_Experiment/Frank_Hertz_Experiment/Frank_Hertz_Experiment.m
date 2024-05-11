% 读取Excel文件
data = readmatrix('D:\Physics_Experiment\Frank_Hertz_Experiment\Frank_Hertz_Experiment.xlsx');

% 提取电压和电流数据
voltage = data(:, 1);  % 第一列数据
current = data(:, 2);  % 第二列数据，转换为纳安培

% 寻找波峰
[pks, locs] = findpeaks(current, voltage, 'MinPeakProminence', 0.1); % 'MinPeakProminence' 调整以适合你的数据

% 绘制原始数据和波峰
plot(voltage, current);
hold on; % 保持当前图形，用于在上面绘制
plot(locs, pks, 'ro'); % 用红色圆圈标出波峰
xlabel('U_{G2k} (V)');
ylabel('I_a (nA)');
title('I_a-U_{G2k} 曲线及波峰');
grid on;
hold on; % 保持当前图形，用于在上面绘制
% 在每个波峰旁边标注坐标
for i = 1:length(pks)
    text(locs(i), pks(i), sprintf('(%0.2f, %0.2f)', locs(i), pks(i)), ...
         'VerticalAlignment', 'bottom', 'HorizontalAlignment', 'right');
end

hold off; % 解除hold状态
% 计算相邻波峰之间的电压差
excitation_potentials = diff(locs); % locs 包含了波峰对应的电压值

% 计算激发电势差的平均值
average_excitation_potential = mean(excitation_potentials);

% 计算与理论值的百分比差异
theoretical_value = 11.5;
percent_difference = ((average_excitation_potential - theoretical_value) / theoretical_value) * 100;

% 输出激发电势
disp('激发电势差：');
disp(excitation_potentials); % 显示所有计算出的激发电势差值
disp('平均激发电势差：');
disp(average_excitation_potential); % 显示激发电势差的平均值
disp('与理论值的百分比差异：');
disp(percent_difference); % 显示与理论值的百分比差异
