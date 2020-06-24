int sensorReading = 0;
//变量sensorReading用来存储模拟输入信号
void setup()
{
  pinMode(A0, INPUT);
  //将引脚A0配置为输入
  Serial.begin(9600);
  //Arduino串口通讯初始化
  pinMode(9, OUTPUT);
  //将引脚9配置为输出
}

void loop()
{
  // 读取引脚A0输入信号
  sensorReading = analogRead(A0);
  // 将A0输入电压映射为数值0-1023之间
  Serial.println(sensorReading);
  // 使映射值在串行显示器中显示
  // speaker
  tone(9, 440 * pow(2.0, (constrain(int(map(sensorReading, 0, 1023, 36, 84)), 35, 127) - 57) / 12.0), 1000);
  //tone(pin,frequency,duration)
  //pin：产生音调的引脚
  //frequence:产生音调的频率，单位HZ，类型 unsigned int
  //duration:声音持续的时间，类型 unsigned long
  //map()函数返回映射数字sensorReading的值
  //int()将返回值化为类型 unsigned int
  
  //constrain（x,a,b)
  //如果x在a、b之间，返回x
  //如果x小于a，返回a
  //如果x大于b，返回b
  
  //pow(base, exponent)
  //返回以base为基，exponent为指数的数
  delay(10); //进行延时，使模拟效果更明显
}