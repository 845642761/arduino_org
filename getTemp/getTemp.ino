/**
 * 读取温度
 * @date 2016年4月17日21:15:09
 */
int potPin = 0; //定义模拟接口0 连接LM35 温度传感器
void setup()
{
  Serial.begin(9600);//设置波特率
}
void loop()
{
  int temp = getTemp();
  Serial.print("Tep:");//原样输出显示Tep 字符串代表温度
  Serial.print(temp);//输出显示dat 的值
  Serial.println("C");//原样输出显示C 字符串
  delay(500);//延时0.5 秒
}

//读取温度
int getTemp(){
  int val;//定义变量
  int dat;//定义变量
  val = analogRead(0); // 读取传感器的模拟值并赋值给val
  dat = (125 * val) >> 8; //温度计算公式
  return dat;
}

