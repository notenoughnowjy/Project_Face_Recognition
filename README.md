# 딥러닝 얼굴 인식을 이용한 보안 및 개인화 시스템


## 팀 이름 : ***MXWS*** (Merry X-mas With Shim)
![image](https://user-images.githubusercontent.com/96164365/205706235-4497c2ac-fc8e-44f5-bc85-6e295538ff54.png)



## 개요
- **팀 소개**
- **작품 개요**
- **작품 구성 및 상세 내용**
- **해당 모델의 장점**
- **해당 시스템의 장점 및 기대 효과**
- **구현 결과**

---

### 팀 소개

- 팀장 : 김진원 
- 팀원 : 송민성
- 팀원 : 박준영

**모델 학습 및 생성, 영상 인식, 리플릿 제작, 논문 제작**

![image](https://user-images.githubusercontent.com/96164365/205486610-3e3a1484-7327-468b-b491-c7b3c744299b.png)


---

### 작품 개요

인구의 밀집화로 한 집에서 여러명이 사는 쉐어하우스가 늘어 나고 있는 추세입니다. 여러명이 한 집에 사는 만큼 서로의 가정집에서 얼굴 인식을 통해 출입만으로도 개인 방문을 잠굴 수 있고, 냉 난방 시스템, 컴퓨터 전원, 전등 등의 전원 제어를 구현하고 싶었습니다. 선택적으로 원하는 제어를 설정해서 본인에게 불필요한 제어를 원하지 않을 수 있는 시스템이며, 만약 타인이 시스템을 통하지 않고 개인의 방문을 열거나, 가전기기를 작동 시킬 시 경보음이 울리게 되고 이를 통해 보안과 가정집 안전 사고에 대비하여 사고를 줄이고 개인에게 높은 편의성을 제공할 수 있는 시스템을 제공하는 소프트웨어 및 간단한 목업을 제작해보았습니다.

![iot gif](https://user-images.githubusercontent.com/96164365/205705228-c289e199-b266-4a00-abde-40483483c0e8.gif)


---

### 구현 환경
- **Image Detecting** : Python
- **Aduino** : C/C++

---

### 작품 구성 및 상세 내용

- 딥 러닝을 통한 얼굴 인식 / Haar cascade 사용

  - Haar Feature(하르 특징)을 계산 및 선택
    - 하르의 세가지 특징
      1. Edge Features : 두개의 사각형으로 구성된 하르 특징의 값은 두 사각 영역 내부에 있는 픽셀들의 합하여 검은색 영역의 합에서 흰색 영역의 합을 빼서 구한 것, 두 사각형의 크기와 모양은 동일
      2. Line Feature : 세 개의 사각형으로 구성된 하르 특징은 중앙에 있는 검은색 사각 영역 내부의 픽셀 합에서 바깥에 있는 두 개의 흰색 사각 영역 내부의 픽셀 합을 뺀 것
      3. Four-rectangle features : 4개의 사각형으로 구성된 하르 특징은 대각선에 위치한 영역간의 차이를 구한다

  - Integral Images(적분 이미지) - 픽셀의 합 구하기

![image](https://user-images.githubusercontent.com/96164365/205641458-0e982f2b-6267-473a-b9d7-aca5b9e0a71f.png)


  - Adaboost는 검은색과 흰색 부분 각각의 밝기 값을 픽셀 합을 구하는 방식으로 진행되는데, 적분 이미지(Integral Images)를 사용해 빠르게 구함

![image](https://user-images.githubusercontent.com/96164365/205486237-5297f0b5-810d-4cb7-b528-be725b48b97d.png)
사진 출처 : https://justadudewhohacks.github.io/face-api.js/docs/index.html#live-demos
 
 
 - 검흰의 네모(Haar feature)로 얼굴을 찾아내어 줌얼굴 검출은 OpenCV의 Haar Cascade Classifier알고리즘으로 이미지의 밝기차를 이용해 특징을 찾아냄
  - 특징에 따라 대상을 분류



---


### 해당 시스템의 장점 및 기대 효과
- 쉐어하우스 내 개인 설정화를 통한 편리한 삶
  - 냉난방 시스템
  - 컴퓨터 전원
  - 전등
  - 블라인드



![image](https://user-images.githubusercontent.com/96164365/205485907-0b117447-1e67-42c7-ba05-1b017ddef05f.png)



- IOT스위치를 이용한 가전제품 제어
  - 아두이노 클라우드 사용
  - 모바일 앱으로 제어

![image](https://user-images.githubusercontent.com/96164365/205488774-e0a3da41-47e9-4f8c-a6a1-013fe5c7d278.png)



- 얼굴 인식을 통한 보안
  - 비밀번호, 키보다 높은 보안률
  - 침입 경보 및 IOT를 이용한 메시지



![image](https://user-images.githubusercontent.com/96164365/205486868-0c825aee-d878-4a5b-907b-8b972d8c791e.png)
출처 : https://blog.naver.com/qschj8/222051976093

---
### 구현 이슈
  - 영상처리를 위한 환경 구축이 어려웠습니다.
  - 아두이노와 함께 파이썬을 합쳐서 구현하는 것에 많은 어려움이 있었습니다.

### 구현 결과

- Youtube Link : 


---

### 참고
https://webnautes.tistory.com/1352


---

### 질문 자료

![image](https://user-images.githubusercontent.com/96164365/205696551-94b3a963-bd52-4042-a8d1-8ca1169caba7.png)




![123123](https://user-images.githubusercontent.com/96164365/205709839-2bfd60d7-4cb2-413f-b39e-e34693450a11.jpg)





