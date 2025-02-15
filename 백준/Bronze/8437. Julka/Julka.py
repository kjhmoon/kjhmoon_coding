def main():
    # 입력 받기
    total_apples = int(input().strip())  # 두 소녀가 가진 총 사과 개수
    klaudia_extra = int(input().strip())  # 클라우디아가 더 많이 가진 사과 개수

    # 사과 개수 계산
    klaudia_apples = (total_apples + klaudia_extra) // 2
    natalia_apples = (total_apples - klaudia_extra) // 2

    # 출력
    print(klaudia_apples)
    print(natalia_apples)

if __name__ == "__main__":
    main()
